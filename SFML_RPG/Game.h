#ifndef GAME_H
#define GAME_H

#include "GameState.h"

using namespace sf;

class Game {
private:
	//Variables
	RenderWindow* window;
	Event event;
	float dt; 
	Clock dtClock;

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initStates();
public:
	//Constructor/Destructor
	Game();
    virtual ~Game();

	//Regular Functions
	void endGame();

	//Updates
	void updateDt();
	void updateSFMLEvents();
	void update();

	//Render
	void render();
	
	//Run
	void run();
};



#endif // !GAME_H