#include "HealthBar.hpp"

void HealthBar::adjustSize(float healthValue, float maxHealth)
{
	float healthPercent = healthValue / maxHealth;

	this->setSize(sf::Vector2f(this->mBackBar.getSize().x * healthPercent, this->mBackBar.getSize().y));
}

void HealthBar::draw(sf::RenderWindow& window)
{
	window.draw(this->mBackBar);
	window.draw(*this);
}

sf::RectangleShape& HealthBar::getBackBar()
{
	return this->mBackBar;
}