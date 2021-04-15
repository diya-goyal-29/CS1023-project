
#include <iostream>
#include<SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Community Chest");
	sf::Font font;
	if (!font.loadFromFile("C:/Users/DEEPAK GOYAL/Downloads/Champagne & Limousines.ttf"))
	{
		return 1;
	}

	sf::Text text1;
	text1.setFont(font);
	text1.setString("Community Chest");
	text1.setPosition(250, 20);
	text1.setFillColor(sf::Color::Black);
	text1.setCharacterSize(44);
	text1.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Texture texture;
	if (!texture.loadFromFile("C:/Users/DEEPAK GOYAL/Desktop/community-chest.jpg")) {
		return 0;
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(300.f, 140.f));
	sprite.setScale(0.3, 0.3);


	sf::Text text2;
	text2.setFont(font);
	text2.setString("\n\n\t\tDoctors fee. Pay $50.");
	text2.setPosition(220, 350);
	text2.setFillColor(sf::Color::Black);
	text2.setStyle(sf::Text::Bold);

	sf::RectangleShape rect2(sf::Vector2f(400.f, 570.f));
	rect2.setPosition(200, 10);
	rect2.setOutlineThickness(5);
	rect2.setOutlineColor(sf::Color::White);

	

	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {

				window.close();
			}

		}
		window.clear();

		window.draw(rect2);
		window.draw(text1);
		window.draw(sprite);
		window.draw(text2);
		
		window.display();
		
	}
}
