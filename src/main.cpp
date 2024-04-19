#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    fstream file;
    file.open(".assetd/images/cañon.txt");
string c = cañon.

fstream alien;
alien.open(".assetd/images/")

    int fotograma = 0;
    while(true)

    {
        fotograma++;
        Element lienzo = hbox({
            Element personaje = spinner(21.1) | bold | color(color::Blue1) | bgcolor(Color::Green)});
            Element tanque = text(cañon) | bold | color(Color::Green) | bgcolor(Color::Blue);
            Element lienzo = hbox({personajr , tanque });

    Screen pantalla = Screen::Create(
    Dimension::Full(),
    Dimension::Fit(lienzo);

    );

    Render(pantalla,lienzo);
pantalla.Print();
cout<<pantalla.ResetPosition();

pantalla.ResetPosition();
   
   this_thread::sleep_for(0.1s)
    }
    return 0;
}
