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
    fstream archivo;

    archivo.open("./assetd/images/canon.txt");
Elements lineas;

    while(|archivo.eof())

    {
        string linea;
        getline(archivo.linea);
        lineas.emplace_back(text(linea));
            
    }

archivo >> canon;
archivo.close();

archivo.open("./assets/images/alien.txt");
string alien;
archivo.close();

int fotograma=0;
while(true){

    fotograma++;
    Element tanque = canon | bold | color(Color::Green1) | bgcolor(Color::Blue1);
    Element personaje = spinner(21,fotograma) | bold | color(Color::Blue1) | bgcolor(Color::Green1);
    Element lienzo = hbox({personaje , tanque});

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
    );

    Render(pantalla,lienzo);
pantalla.Print();
cout<<pantalla.ResetPosition();

pantalla.ResetPosition();
   
   this_thread::sleep_for(0.1s);
    }
    return 0;
}
