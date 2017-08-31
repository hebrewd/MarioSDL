#pragma once

#include <SDL2/SDL.h>

class gameobject
{

	public:
		SDL_Rect *get_drect(void);
	protected:
		SDL_Rect srect, drect;
};
