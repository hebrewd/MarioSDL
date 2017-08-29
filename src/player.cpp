#include <SDL2/SDL.h>
#include <iostream>

#include "player.h"

using namespace std;

player::player()
{
	drect = {10, 800/2, 32, 32};
	cstat = stand_still;
	grav = 0;
	falling = true;
	running = false;
	speed = 0;
}

void player::move()
{
	switch(cstat)
	{
		case move_left:
			drect.x-=5 + speed;
			break;
		case move_right:
			drect.x+=5 + speed;
			break;
	}
	drect.y += grav;
	if(falling) grav+=1;
	else grav=0;
	if(running && (speed<=5)) speed += 1;
	if(!running) speed = 0;
}
void player::set_status(player::status s1)
{
	cstat = s1;
}

void player::jump()
{
	grav = -20;
	falling = true;
}

void player::set_falling(bool flag)
{
	falling = flag;
}
bool player::on_block(block b)
{
	if(((drect.x + drect.w) >= b.get_drect()->x) && (drect.x <= (b.get_drect()->x + b.get_drect()->w)))
		if((drect.y + drect.h + grav) >= b.get_drect()->y)
		{
			if(((drect.y + drect.h + grav) > b.get_drect()->y)) drect.y = b.get_drect()->y - drect.h;
			return true;
		}
	return false;
}
bool player::hit_block(block b)
{
	if(((drect.y + drect.h) > b.get_drect()->y) || (drect.y < (b.get_drect()->y + b.get_drect()->h)))
		if(((drect.x + drect.w) >= b.get_drect()->x) && (drect.x <= (b.get_drect()->x + b.get_drect()->w)))
		{
			std::cout << "hitting a block\n";
			return true;
		}
	std::cout << "Not hitting a block\n";
	return false;
}
void player::set_running(bool flag)
{
	running = flag;
}
