#ifndef STATE_H
#define STATE_H

#include "Entity.h"

using namespace sf;

//Will be used to keep track of resources such as textures etc.
class State {
protected:
	RenderWindow* window;
	const std::unordered_map<std::string, int> supportedKeys;
	std::unordered_map<std::string, int> keybinds; //keybinds for each state instance
	bool quit;

	Vector2i mousePosScreen;
	Vector2i mousePosWindow;
	Vector2f mousePosView;

	//Resources
	std::vector<Texture> textures;

	//Functions
	virtual void initKeybinds() = 0;

public:
	State(RenderWindow* window, const std::unordered_map<std::string, int>& supportedKeys);
	virtual ~State();

	const bool& getQuit() const;
	virtual void checkForQuit();
	virtual void endState() = 0;
	virtual void updateMousePositions();
	virtual void updateInput(const float& dt) = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(RenderTarget* target = nullptr) = 0;
};


#endif

