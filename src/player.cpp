#include <SDL2/SDL.h>

#include "player.h"

using namespace std;

player::player()
{
	drect = {600/2, 800/2, 32, 32};
	cstat = stand_still;
	grav = 0;
	falling = true;
}

SDL_Rect *player::get_drect()
{
	return &drect;
}

void player::move()
{
	switch(cstat)
	{
		case move_left:
			drect.x-=5;
			break;
		case move_right:
			drect.x+=5;
			break;
	}
	drect.y += grav;
	if(drect.y<800/2) grav+=1;
	if(drect.y>=800/2) grav=0;
}
void player::set_status(player::status s1)
{
	cstat = s1;
}

void player::jump()
{
	grav = -20;
}
