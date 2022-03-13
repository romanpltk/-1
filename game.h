#pragma once
#include "SFML/Graphics.hpp"
#include "player.h"
class Game {
public:
	enum GameState{INTRO,GAME_STATE,GAME_OVER};
	Game();
	void play();
private:
	sf::RenderWindow window;
	Player player;
	void update();
	void draw();
	void check_events();
	void check_collisions();
};