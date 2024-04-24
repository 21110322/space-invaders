#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char cont *argv[])
{
    auto Pantalla = Screen::Create(Dimension::Fixed(), Dimension::Fixed(10));
    Pantalla.PixelAT(5.5).character = 'm';
    Render(Pantalla, border(text("Hola")));
    Pantalla.Print();

    return 0;
}