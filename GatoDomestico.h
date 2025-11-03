#include <iostream>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino
{
private:
    string nombreDuenio;

public:
    GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza) : Felino(anioNacimiento, lugarNacimiento,raza)
    {
        this->nombreDuenio = nombreDuenio;
    }

    ~GatoDomestico()
    {
    }
    string imprimirDieta()
    {
        return "Dieta del gato es con Whiskas.";
    }

    void setNombreDuenio(string nuevoNombre)
    {
        this->nombreDuenio = nuevoNombre;
    }

    string getNombreDuenio()
    {	
        return nombreDuenio;
    }
};