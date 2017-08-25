#include <SDL2/SDL.h>

class block
{
	SDL_Rect srect, drect;
	public:
		block(int, int);
		SDL_Rect *get_drect();
};
