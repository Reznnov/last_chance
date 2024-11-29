#pragma once
#include <SDL.h>
#include <vector>
#include <string>

class MainMenu {
public:
	MainMenu(SDL_Renderer* renderer);
	~MainMenu();

	void render(); 
	void handleEvents();
	bool isActive() const;
	void update();

private:
	SDL_Renderer* renderer;
	bool active;
	int selectedItem;

	std::vector<std::string> menuItems;
	SDL_Color activeColor;
	SDL_Color inactiveColor;
}; 