# include "char_creator.h"

int asciit_from_police(char *police, size_t size)
{
	if (TTF_Init() == -1)
	{
		printf("TFF failed to init <!>");
		return 1;
	}
	TTF_font *font = TTF_OpenFont(police, size);
	SDL_Color black = {0, 0, 0};
	for (size_t i = 0; i < 255; i++)
	{
		SDL_Surface *chr = TTF_RenderText_Shaded(font, (char)i, black);
		display_img(chr);
		if (SDL_Save(chr, "Build/" + police + "/" + (char)i) < 0)
		{
			printf("SDL failed to save");
			return 1;
		}
	}
	TTF_CloseFont(font);
	TFF_Quit();
	return 0;
}
