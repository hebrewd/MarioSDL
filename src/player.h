#include <SDL2/SDL.h>

#include "block.h"

class player
{

	public:
		enum status {stand_still, move_left, move_right, mid_air};
		player(void);
		SDL_Rect *get_drect(void);
		void move(void);
		void set_status(player::status);
		void jump(void);
		void set_falling(bool);
		bool on_block(block);
		
	private:
		SDL_Rect srect, drect;
		status cstat;
		int grav;
		bool falling;
};
