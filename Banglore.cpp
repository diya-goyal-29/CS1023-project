
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
	text1.setString("Banglore");
	text1.setPosition(350, 90);
	text1.setFillColor(sf::Color::Black);
	text1.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text2;
	text2.setFont(font);
	text2.setString("Cost : $330");
	text2.setPosition(330, 120);
	text2.setFillColor(sf::Color::Black);
	text2.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text3;
	text3.setFont(font);
	text3.setString("Rent without House : 33\nRent with 1 House : $35\nRent with 2 House : $37\nRent with 3 House : $39\nRent with 4 House : $41\nRent with Hotel : $45\n\nMortage Value : $165\nCost of House : $70\nCost of Hotel : $105\n");
	text3.setPosition(220, 170);
	text3.setFillColor(sf::Color::Black);

	sf::RectangleShape rect1(sf::Vector2f(400.f, 70.f));
	rect1.setPosition(200, 10);
	rect1.setOutlineThickness(5);
	rect1.setOutlineColor(sf::Color::White);
	rect1.setFillColor(sf::Color::Green);

	sf::RectangleShape rect2(sf::Vector2f(400.f, 500.f));
	rect2.setPosition(200, 80);
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

		window.draw(rect1);
		window.draw(rect2);
		window.draw(text1);
		window.draw(text2);
		window.draw(text3);
		
		window.display();
		
	}
}