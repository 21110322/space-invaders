#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])

{
    string palabra="DVD";
    int posicionInicialX = 0;
    int posicionInicialY = 0;

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full(10));
   
   while(true){
this_thread::sleep_for(0.1s);

int posicionPalabraX=0;
int posicionPalabraY=0;

for (auto&&letra : palabra)
{
    int posicionfinalX=posicionInicialX+posicionPalabraX;
    int posicionfinalY=posicionInicialY+posicionPalabraY;

    Pantalla.PixelAt(posicionfinalX, posicionfinalY).character = letra;
    posicionPalabra++;
}
Pantalla.Print();
Pantalla.Clear();

cout<<Pantalla.ResetPosition();

posicionInicialX++;
posicionInicialY++;
   }
    return 0;
}