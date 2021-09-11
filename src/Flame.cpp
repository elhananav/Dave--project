#include "Flame.h"

Flame::Flame(const sf::Sprite& sprite, sf::Vector2f size, sf::Vector2f scale)
	:Static(sprite, size, scale)
{
	setAnimState(ONPLACE);
	setSpriteSize(FLAME_SIZE);
}