#include "Kalkulator.h"
#include "przycisk.cpp"

using namespace std;

int main(){
    sf::RenderWindow okno(sf::VideoMode(800, 600), "Kalkulator");
    sf::Vector2u rozmiarOkna = okno.getSize();
    cout << rozmiarOkna.x << endl;
    string dzialanie;
    //Kalkulator kalkulator;
   // kalkulator.wczytajRownanie();
    Przycisk przycisk1(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/1.png");
    Przycisk przycisk2(rozmiarOkna.x-200, rozmiarOkna.y-200,"images/2.png");
    Przycisk przycisk3(rozmiarOkna.x-300, rozmiarOkna.y-200,"images/3.png");
    Przycisk przycisk4(rozmiarOkna.x-400, rozmiarOkna.y-200,"images/4.png");
    Przycisk przycisk5(rozmiarOkna.x-500, rozmiarOkna.y-200,"images/5.png");
    Przycisk przycisk6(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/6.png");
    Przycisk przycisk7(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/7.png");
    Przycisk przycisk8(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/8.png");
    Przycisk przycisk9(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/9.png");
    Przycisk przycisk10(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/0.png");
    Przycisk przycisk11(rozmiarOkna.x-500, rozmiarOkna.y-200,"images/+.png");
    Przycisk przycisk12(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/-.png");
    Przycisk przycisk13(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/razy.png");
    Przycisk przycisk14(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/przez.png");
    Przycisk przycisk15(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/potega.png");
    Przycisk przycisk16(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/pierw.png");
    Przycisk przycisk17(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/sin.png");
    Przycisk przycisk18(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/cos.png");
    Przycisk przycisk19(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/tg.png");
    Przycisk przycisk20(rozmiarOkna.x-100, rozmiarOkna.y-200,"images/silnia.png");
    Przycisk przycisk21(rozmiarOkna.x-400, rozmiarOkna.y-200,"images/rowna.png");

    while (okno.isOpen())
    {
        sf::Event event;
        while (okno.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed && przycisk1.onClick(event.mouseButton.x, event.mouseButton.y)) {
                dzialanie += "1";
            }
            if (event.type == sf::Event::MouseButtonPressed && przycisk2.onClick(event.mouseButton.x, event.mouseButton.y)) {
                dzialanie += "2";
            }
            if (event.type == sf::Event::MouseButtonPressed && przycisk3.onClick(event.mouseButton.x, event.mouseButton.y)) {
                dzialanie += "3";
            }
            if (event.type == sf::Event::MouseButtonPressed && przycisk11.onClick(event.mouseButton.x, event.mouseButton.y)) {
                dzialanie += "+";
            }
            if (event.type == sf::Event::MouseButtonPressed && przycisk21.onClick(event.mouseButton.x, event.mouseButton.y)) {
                cout << dzialanie << dzialanie.find("+") << endl;
            }
            if (event.type == sf::Event::Closed) {
                okno.close();
            }
                
        }
        okno.clear(sf::Color::Black);
        okno.draw(przycisk1.sprite);
        okno.draw(przycisk2.sprite);
        okno.draw(przycisk3.sprite);
        okno.draw(przycisk11.sprite);
        okno.draw(przycisk21.sprite);
        okno.display();

    }
}
