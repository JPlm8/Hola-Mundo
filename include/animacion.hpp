#pragma once 
#include <list>
using namespace std;
#include <Dibujo.hpp>

class Animacion
{
private:
    list<Dibujo> fotogramas;
public:
    Animacion(list<Dibujo> fotogramas){
        this->fotogramas = fotogramas;
    }
    ~Animacion() {}
    void Reproducir(){
        for (auto &&dibujo : this->fotogramas)
        {
            dibujo.Dibujar();
        }
        
    }
};