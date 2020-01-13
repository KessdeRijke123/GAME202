// Name: Kess de Rijke
// Course: Game 202
// Prof: Majid Moghadam
// Program Title: Pong
// Date: Monday, January 13, 2020

// Includes the SDL library.
#include "SDL.h"

// Defines thw window's width and height.
#define WINDOW_WIDTH    800
#define WINDOW_HEIGHT   600

// Initializes the renderer.
SDL_Renderer *renderer;

// Creates a boolean that is true.
bool running = true;

// Defines the objects as rectangles.
SDL_Rect PlayerPaddle;
SDL_Rect AIPaddle;
SDL_Rect Ball;
SDL_Rect MiddleLine;

// Creates a LoadGame function.
void LoadGame()
{
	// Initializes the window.
	SDL_Window *window;

	// Creates a new window names "Basic SDL Sprites".
	window = SDL_CreateWindow("Basic SDL Sprites",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		WINDOW_WIDTH, WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN);
	if (!window)
	{
		return;
	}

	// Creates the renderer window.
	renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer)
	{
		return;
	}

	// Sets the x and y position, and the width and height of the PlayerPaddle .
	PlayerPaddle.x = 20;
	PlayerPaddle.y = 250;
	PlayerPaddle.h = 100;
	PlayerPaddle.w = 20;

	// Sets the x and y position, and the width and height of the AIPaddle .
	AIPaddle.x = 760;
	AIPaddle.y = 250;
	AIPaddle.h = 100;
	AIPaddle.w = 20;

	// Sets the x and y position, and the width and height of the MiddleLine .
	MiddleLine.x = 395;
	MiddleLine.y = 0;
	MiddleLine.h = 600;
	MiddleLine.w = 10;

	// Sets the x and y position, and the width and height of the Ball .
	Ball.x = 370;
	Ball.y = 290;
	Ball.h = 20;
	Ball.w = 20;
}


void Input()
{

}


void Update()
{

}


void DrawScreen()
{
	// 
	SDL_RenderClear(renderer);

	// 
	SDL_Rect background = { 0, 0, 800, 600 };
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderFillRect(renderer, &background);

	// Renders the PlayerPaddle and AIPaddle line.
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderFillRect(renderer, &PlayerPaddle);
	SDL_RenderFillRect(renderer, &AIPaddle);

	// Renders the middle line.
	SDL_RenderFillRect(renderer, &MiddleLine);

	// Renders the Ball.
	SDL_RenderFillRect(renderer, &Ball);

	// Updates the screen with rendering being performed.
	SDL_RenderPresent(renderer);
}


void Quit()
{
	// The SDL quit command.
	SDL_Quit();
}


int main(int argc, char *argv[])
{
	// Calls the LoadGame function.
	LoadGame();

	// While the game is running, do this.
	while (running == true)
	{
		Input();		// Calls the Input function.
		Update();		// Calls the Update function.
		DrawScreen();	// Calls the DrawScreen function.
	}

	// Closes the running program.
	Quit();

	return 0;
}




