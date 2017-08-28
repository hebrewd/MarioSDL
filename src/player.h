#include <SDL2/SDL.h>

#include "gameobject.h"
#include "block.h"

class player : public gameobject
{

	public:
		enum status {stand_still, move_left, move_right, mid_air};
		player(void);
		void move(void);
		void set_status(player::status);
		void jump(void);
		void set_falling(bool);
		bool on_block(block);
		void set_running(bool);
		int speed;
		
	private:
		status cstat;
		int grav;
		bool falling;
		bool running;
};
