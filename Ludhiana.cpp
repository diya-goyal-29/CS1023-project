
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
	text1.setString("Ludhiana");
	text1.setPosition(350, 90);
	text1.setFillColor(sf::Color::Black);
	text1.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text2;
	text2.setFont(font);
	text2.setString("Cost : $140");
	text2.setPosition(330, 120);
	text2.setFillColor(sf::Color::Black);
	text2.setStyle(sf::Text::Bold | sf::Text::Underlined);

	sf::Text text3;
	text3.setFont(font);
	text3.setString("Rent without House : $14\nRent with 1 House : $50\nRent with 2 House : $150\nRent with 3 House : $450\nRent with 4 House : $625\nRent with Hotel : $750\n\nMortage Value : $70\nCost of House : $100\nCost of Hotel : $150\n");
	text3.setPosition(220, 170);
	text3.setFillColor(sf::Color::Black);

	sf::RectangleShape rect1(sf::Vector2f(400.f, 70.f));
	rect1.setPosition(200, 10);
	rect1.setOutlineThickness(5);
	rect1.setOutlineColor(sf::Color::White);
	rect1.setFillColor(sf::Color::Red);

	sf::RectangleShape rect2(sf::Vector2f(400.f, 500.f));
	rect2.setPosition(200, 80);
	rect2.setOutlineThickness(5);
	rect2.setOutlineColor(sf::Color::White);
	
	sf::RectangleShape rect3(sf::Vector2f(100, 50));
	rect3.setPosition(50, 300);
	rect3.setOutlineThickness(5);
	rect3.setOutlineColor(sf::Color::White);
	rect3.setFillColor(sf::Color(255, 10, 100));

	sf::RectangleShape rect4(sf::Vector2f(100, 50));
	rect4.setPosition(650, 300);
	rect4.setOutlineThickness(5);
	rect4.setOutlineColor(sf::Color::White);
	rect4.setFillColor(sf::Color(255,10,100));

	sf::Text text4;
	text4.setFont(font);
	text4.setString("BUY");
	text4.setPosition(70, 305);
	text4.setStyle(sf::Text::Bold);

	sf::Text text5;
	text5.setFont(font);
	text5.setString("LEAVE");
	text5.setPosition(660, 305);
	text5.setStyle(sf::Text::Bold);


	while (window.isOpen()) {

		sf::Event event;
		while (window.pollEvent(event)) {

			if (event.type == sf::Event::Closed) {

				window.close();
			}
			if ((sf::Mouse::getPosition(window).x >= 45 && sf::Mouse::getPosition(window).x <= 150) && (sf::Mouse::getPosition(window).y >= 295 && sf::Mouse::getPosition(window).y <= 355)) {

				if (event.type == sf::Event::MouseButtonPressed) {
					if (event.mouseButton.button == sf::Mouse::Left) {
						//enter the buying details
					
					}
				}

			}
			if ((sf::Mouse::getPosition(window).x >= 645 && sf::Mouse::getPosition(window).x <= 750) && (sf::Mouse::getPosition(window).y >= 295 && sf::Mouse::getPosition(window).y <= 355)) {

				if (event.type == sf::Event::MouseButtonPressed) {
					if (event.mouseButton.button == sf::Mouse::Left) {
						//enter the leaving details
					
					}
				}

			}

		}
		window.clear();

		window.draw(rect1);
		window.draw(rect2);
		window.draw(text1);
		window.draw(text2);
		window.draw(text3);
		window.draw(rect3);
		window.draw(rect4);
		window.draw(text4);
		window.draw(text5);
		
		window.display();
		
	}
}
