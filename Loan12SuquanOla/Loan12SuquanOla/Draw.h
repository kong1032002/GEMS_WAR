#ifndef Draw_h
#define Draw_h

#include "Lib.h"
#include "Game.h"
#include "Player.h"

class Draw
{
public:
	typedef struct { int x, y; bool saved; } Position;
	Draw();
	~Draw();

	SDL_Texture* loadTexture(const std::string& file, SDL_Renderer* ren);
	void logSDLError(std::ostream& os, const std::string& msg, bool fatal = false);
	void quitSDL(SDL_Window* window, SDL_Renderer* ren);
	void renderTexture(SDL_Texture* tex, SDL_Renderer* ren, int x, int y, int w, int h);
	void renderBar(SDL_Texture* tex, SDL_Renderer* ren, int x, int y, int w, int h, int lengthpercent);
	void refreshScreen(SDL_Window* window, SDL_Renderer* ren, const SDL_Rect& filled_rect);
	
	bool MenuGame();
	void PlayGame();
	void Turtorial();
	void DropIcon();
	int random();

protected:
	Game gplay;
	const int BarW = 180;
	const int BarH = 45;
	const int EleSize = 70;
	const int SCREEN_WIDTH = 600;
	const int SCREEN_HEIGHT = 800;
	const int step = 480 / gplay.BFSize;
	const string WINDOW_TITLE = "Loan 12 su quan";
	Player P[3], COM;
	string text;
	Position Pos;
	int playerTurn;

	TTF_Font* font = NULL;
	SDL_Color fg;

	SDL_Renderer* renderer;
	SDL_Window* window;
	SDL_Rect filled_rect;
	
	SDL_Texture* Turn;
	SDL_Surface* Text;

	SDL_Texture* Number[10];
	SDL_Texture* EleFire;
	SDL_Texture* EleWater;
	SDL_Texture* EleWind;
	SDL_Texture* EleEarth;

	SDL_Texture* Lightning;
	SDL_Texture* P1Win;
	SDL_Texture* P2Win;
	SDL_Texture* Xsword;
	SDL_Texture* MainMenu;
	SDL_Texture* Tutorial_1;
	SDL_Texture* Tutorial_2;
	SDL_Texture* PWait;
	SDL_Texture* PTurn;
	SDL_Texture* P1Character;
	SDL_Texture* P2Character;
	SDL_Texture* background;
	SDL_Texture* TargetSelected;
	SDL_Texture* Target;

	SDL_Texture* Icon;
	SDL_Texture* RedSword;
	SDL_Texture* Sword;
	SDL_Texture* Heart;
	SDL_Texture* Mana;
	SDL_Texture* EXPScroll;
	SDL_Texture* Gold;
	SDL_Texture* Food;

	SDL_Texture* EEXP;
	SDL_Texture* EHP;
	SDL_Texture* EMP;
	SDL_Texture* EFood;
	SDL_Texture* EXPBar;
	SDL_Texture* HPBar;
	SDL_Texture* MPBar;
	SDL_Texture* FoodBar;
};

#endif // !Draw_h
