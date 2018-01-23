# ifndef SDL_UTILS
# define SDL_UTILS

# include <stdlib.h>
# include <stdio.h>
# include <err.h>
# include <SDL/SDL.h>
# include <SDL/SDL_image.h>

/*
*	Gets a pixel from a Surface
*
*	Parameters:
*	- surface: the surface to read
*	- x: x coordinate of the pixel
*	- y: y coordinate of the pixel
*	
*	Returns a Uint32 pixel.
*/
Uint32 getpixel(SDL_Surface *surface, unsigned x, unsigned y);

/*
*	Puts a pixel on a Surface
*
*	Parameters:
*	- surface: the surface to write on
*	- x: the x coordinate
*	- y: the y coordinate
*	- pixel: a Uint32 pixel to put
*/
void putpixel(SDL_Surface *surface, unsigned x, unsigned y, Uint32 pixel);

/*
*	Waits for the user to press a key
*/
void wait_for_keypressed(void);

/*
*	Initializes SDL
*/
void init_sdl(void);

/*
*	Loads an image to SDL from the given path
*
*	Parameter:
*	- path: the path of the file (jpg format)
*
*	Returns a SDL_Surface
*/
SDL_Surface* load_image(char *path);

/*
*	Displays a Surface on a window
*
*	Parameter:
*	- img: the Surface to display
*
*	Returns a Surface
*/
SDL_Surface* display_image(SDL_Surface *img);

/*
*	Changes RGB values of a pixel to human grey scale
*
*	Parameters:
*	- r: The red component of the pixel
*	- g: the green component of the pixel
*	- b: the blue component of a pixel
*/
void toRGB(Uint8 *r, Uint8 *g, Uint8 *b);

/*
*	Changes a Surface to human grey scale
*
*	Parameter:
*	- surf: the Surface to change
*/
void img_to_grey(SDL_Surface *surf);

# endif
