#include "game.h"
#include "settings.h"
#include <iostream>

Game::Game():
	window(sf::VideoMode(WINDOW_WIDTH,WINDOW_HEIGHT),WINDOW_TITLE,
		sf::Style::Titlebar | sf::Style::Close){}
void Game::play() {
	while (window.isOpen()) {
		check_events();
		update();
		check_collisions();
		draw();
	}
 }
void Game::check_events() {
	sf::Event event;
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) window.close();
		
	}
}
void Game::update() { player.update(); }
void Game::draw() {
	
	player.draw(window);
	
	window.display();
}
void Game::check_collisions() {}
