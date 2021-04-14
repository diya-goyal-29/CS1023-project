
#include <iostream>
#include<SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Play Card");
	sf::Font font;
	if (!font.loadFromFile("C:/Users/DEEPAK GOYAL/Downloads/Champagne & Limousines.ttf"))
	{
		return 1;
	}

	sf::Text text1;
	text1.setFont(font);
	text1.setString("Chennai Central");
	text1.setPosition(310, 20);
	text1.setFillColor(sf::Color::Black);
	text1.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text2;
	text2.setFont(font);
	text2.setString("Cost : $200");
	text2.setPosition(330, 60);
	text2.setFillColor(sf::Color::Black);
	text2.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Texture texture;
	if (!texture.loadFromFile("C:/Users/DEEPAK GOYAL/Desktop/Railroad.jpg")) {
		return 0;
	}
	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(300.f, 100.f));


	sf::Text text3;
	text3.setFont(font);
	text3.setString("Rent : $25\nRent with 2 Railways : $50\nRent with 3 Railways : $100\nRent with 4 Railways : $200\n\nMortage Value : $100\n");
	text3.setPosition(220, 300);
	text3.setFillColor(sf::Color::Black);

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
		window.draw(text2);
		window.draw(text3);
		window.draw(sprite);
		
		window.display();
		
	}
}
