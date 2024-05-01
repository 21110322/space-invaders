#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>
#include <experimental/random>
using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])
    {
        list<Dibujo> dibujo;

        for (int i = 0; i < 20; i++)

    {
        Dibujo palabraa("Hola" + to string(i),experimental::randit(0,20),experimental::randit(0,20));
        dibujos.push_back(palabra);
    }

    auto Pantalla=Screen::Create(Dimension::Full(),Dimenssion::Full());

    while(true){
        Pantalla.Clear();
        this_thread::sleep_for(0.1s);
        for (auto &&i : dibujos)
        {
            i.DesplazarX(1);
        }

Pantalla.Print();

cout<<Pantalla.ResetPosition();

   }
    return 0;
}