#ifndef GAME_H
#define GAME_H

#include "MainMenuState.h"

using namespace sf;

class Game {
private:
	//Variables
	RenderWindow* window;
	Event event;
	float dt; 
	Clock dtClock;


	std::unordered_map<std::string, int> supportedKeys;

	//Initialization
	void initWindow();
	void initStates();
	void initKeys();
public:

	static std::stack<State*> states;
	
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