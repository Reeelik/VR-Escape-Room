#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>


class Przycisk {
public:
	sf::Vector2f cor;
	sf::Vector2i pozycjaMyszki;
	sf::Vector2u hitbox;
	sf::RectangleShape przycisk;
	sf::Texture texture;
	sf::Sprite sprite;

	Przycisk(int x = 0, int y = 0, std::string sciezka = NULL) {

		cor.x = x;
		cor.y = y;

		texture.loadFromFile(sciezka);
		sprite.setTexture(texture);
		sprite.setPosition(cor);
		hitbox = texture.getSize();
		//hitbox.x=sprite.getPosition+ sprite.GetGlobalBounds().x
	}

	bool onClick(int myszkaX, int myszkaY) {
		if(
			(cor.x<=myszkaX && cor.x+hitbox.x>=myszkaX ) 
			&&
			(cor.y <= myszkaY && cor.y + hitbox.y >= myszkaY)) {
				return true;
			}
		else {
			return false;
		}
		
	}

};