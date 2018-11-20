/**********************************************************************
 *
 * IMPORTANT NOTE:
 * Make sure you compile the project in x86 architecture.
 * If you see x64 in the combo box above, change it to x86.
 * This is because the libraries we are using (SDL, libpng, etc) are
 * compiled in x86 architecture, so we have to adapt.
 *
 **********************************************************************/

#pragma comment(linker,"/ENTRY:mainCRTStartup")
#pragma comment(linker,"/SUBSYSTEM:WINDOWS")

#include <stdlib.h>
#include "sdl_functions.h"

struct Ball
{
	SDL_Rect rect;    // position in the texture
	SDL_Texture *tex; // texture
	float x, y;       // position in the world
	float vx, vy;     // velocity in the world
};

int main(int argc, char* argv[])
{
	// Initialize SDL
	if (Init() == 0) {
		return 1;
	}

	// Load a texture
	SDL_Texture *texScreen = LoadTexture("Assets/Screens/screen02.png");
	SDL_Texture *texMario = LoadTexture("Assets/Sprites/Mario.png");


	Ball Mario[3] = {
		{ { 0, 0, 200, 256 }, texMario, 400, 15, 0, 0 },
		{ {0, 0, 200, 256}, texMario, 200, 5, 0, 0},
		{ {0, 0, 200, 256}, texMario, 10, 25, 0, 0}
	};
	

	const float gravity = 600.0f;         // pixels / second^2
	const float deltaTime = 1.0f / 60.0f; // More or less 60 frames per second

	while (exitApplication != 1)
	{
		PreUpdate(); // Updates events

		int i = 0;
		int min = -500;
		int max = -100;

		for (i = 0; i < 3; i++) {

			/* Handle space pressed */
			if (SpaceWasPressed() == 1 && Mario[i].vy <= 0.0f)
			{
				// TODO 4: Apply negative gravity to have the ball bouncing again

				Mario[i].vy = -500 - rand() % 599;

			}	
		}
			

			/* Draw the screen */
			SDL_Rect rect;
			rect.x = 0;
			rect.y = 0;
			rect.w = 1024;
			rect.h = 576;
			Blit(texScreen, 0, 0, &rect);

			// Apply gravity
			// TODO 1: Update ball position based on the current position, the current velocity, the acceleration (gravity) and the time passed (deltaTime)
			// TODO 2: Update ball velocity based on the current velocity, the acceleration (gravity) and the time passed (deltaTime)

			for (i = 0; i < 3; i++) {
				Mario[i].vy = Mario[i].vy + gravity * deltaTime;
				Mario[i].y = Mario[i].y + Mario[i].vy * deltaTime + 0.5 * gravity* (deltaTime *deltaTime);

				// Ball touched the floor
				if (Mario[i].y >= 192)
				{
					Mario[i].vy = -Mario[i].vy*0.85;
					Mario[i].y = 192;

				}


				/* Draw the ball */
				Blit(Mario[i].tex, Mario[i].x, Mario[i].y, &Mario[i].rect);

			}
			

				PostUpdate(); // Presents the screen
		
	}
		

	// Unload textures
	UnloadTexture(texMario);
	UnloadTexture(texScreen);

	// Finalize SDL
	CleanUp();

	return 0;
}
