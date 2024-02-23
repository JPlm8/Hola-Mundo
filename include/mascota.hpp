#pragma once
class mascota
{
private:
    int vida;
public:
    mascota() {
        this-> vida = 0;
    }
    ~mascota() {}
    void Comer(Alimento alimento){
        vida+=alimento.ExtraerEnergia();
    }

};