#pragma once
#include <string>
#include <ftxui/screen/screen.hpp>
using namespace std;

class Dibujo
{
private:
    int posicionX;
    int posicionY;
    string palabra;
public:
    Dibujo(){
        this->posicionX=0
        this->posicionY=0
    }
    Dibujo(int posicionX, int posicionY)
    {
        this->posicionX=posicionX;
        this->posicionY=posicionY;
    }
    Dibujo(list<string> contenido, int posicionX, int posicionY)
    {
        this->contenido=contenido;
        this->posicionX=posicionX;
        this->posicionY=posicionY;
    }
    void Dibujar(ftxui::Screen &Pantalla)
    {
        int posicionPalabraX = 0;
        int posicionPalabraY = 0;

    for (auto &&linea : contenido)
    {
        for (auto &&letra : linea)
        {
        int posicionFinalX=this->posicionX+posicionPalabraX;
        int posicionFinalY=this->posicionY+posicionPalabraY;

        Pantalla.PixelAt(posicionFinalX, posicionFinalY).character = letra;
        posicionPalabraX++;
    }
    posicionPalabraY++;
    }
}
void DesplazarX(int distancia)
{
    posicionX += distancia;
}
void DesplazarY(int distancia)
{
    posicionY += distancia;
}
~Dibujo() {}
};