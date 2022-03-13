#include "player.h"
#include "settings.h"
Player::Player(){
	texture.loadFromFile(IMAGES_FOLDER + PLAYER_FILE_NAME);
sprite.setTexture(texture);
sprite.setScale(0.68f, 0.35f);
sf::FloatRect g_bounds = sprite.getGlobalBounds();
sprite.setPosition(WINDOW_WIDTH-WINDOW_WIDTH+g_bounds.width,WINDOW_HEIGHT/2-g_bounds.height);
}
void Player::update() {
	sf::Vector2f position = sprite.getPosition();
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))  sprite.move(0.f, +PLAYER_SPEED) ;
}
void Player::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Player::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Player::getPosition() { return sprite.getPosition(); }