#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero
{
private:
    string nombreCirco;

public:
    Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anioNacimiento, lugarNacimiento, raza)
    {
        this->nombreCirco = nombreCirco;
    }
    Felino(int anioNacimiento, string lugarNacimiento, string raza) : Mamifero(anioNacimiento, lugarNacimiento, raza)
    { // este constructor sirve para cuando no se especifica el circo
        
    }

    ~Felino()
    {
    }

    string imprimirDieta()
    {
        return "Dieta de felino es a base de carne.";
    }

    void setNombreCirco(string nuevoNombre)
    { // setter para modificar el nombre del circo
        this->nombreCirco = nuevoNombre;
    }

    string getNombreCirco()
    { // getter para obtener el nombre del circo
        return nombreCirco;
    }
};

#endif