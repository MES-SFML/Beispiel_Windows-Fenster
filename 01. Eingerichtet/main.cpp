#include <SFML/Window.hpp>

using namespace sf; // statt std, hat zur Folge, dass bei String etc. std:: vor gesetzt werden muss

int main()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");
    // Window window(VideoMode(800, 600), "My window"); // ohne sf::  vielleicht hilft das die Übersicht zu behalten
    // window.setTitle("SFML window");
    // window.setPosition(sf::Vector2i(100, 500));

    // Führe das Programm aus, solange das Fenster geöffnet ist
    while (window.isOpen())
    {
        // Alle Ereignisse des Fensters prüfen, die seit der letzten Iteration der Schleife ausgelöst wurden
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Ereignis "Schließen angefordert": Wir schließen das Fenster
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}