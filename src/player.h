#include <SDL2/SDL.h>

class player
{

	public:
		enum status {stand_still, move_left, move_right, mid_air};
		player(void);
		SDL_Rect *get_drect(void);
		void move(void);
		void set_status(player::status);
		void jump(void);
		
	private:
		SDL_Rect srect, drect;
		status cstat;
		int grav;
		bool falling;
};
