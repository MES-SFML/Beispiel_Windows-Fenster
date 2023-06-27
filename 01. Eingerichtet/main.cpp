#include <SFML/Window.hpp>

using namespace sf; // statt std, hat zur Folge, dass bei String etc. std:: vor gesetzt werden muss

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    // Window window(VideoMode(800, 600), "My window"); // ohne sf::  vielleicht hilft das die �bersicht zu behalten
    // window.setTitle("SFML window");
    // window.setPosition(sf::Vector2i(100, 500));

    // F�hre das Programm aus, solange das Fenster ge�ffnet ist
    while (window.isOpen())
    {
        // Alle Ereignisse des Fensters pr�fen, die seit der letzten Iteration der Schleife ausgel�st wurden
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Ereignis "Schlie�en angefordert": Wir schlie�en das Fenster
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}