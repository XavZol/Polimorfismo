#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
using namespace std;

class BecadoDeporte : public Alumno, public Deportista
{
private:
    float montoBeca;

public:
    BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca) : Alumno(nombreCarrera), Deportista(nombreEntrenador)
    {
        this->montoBeca = montoBeca;
    }

    ~BecadoDeporte()
    {
    }

    void mostrarDatos()
    {
        Alumno::mostrarDatos(); // Llamada al método mostrarDatos de la clase Alumno
        Deportista::mostrarDatos();
        cout << "Monto de la Beca: " << montoBeca << endl; // Mostrar monto de la beca
    }

    void setMontoBeca(float n)
    { // metodo setter para incrementar la beca
        float incremento = (montoBeca * n) / 100;
        this->montoBeca += incremento;
    }

    float getMontoBeca()
    { // metodo getter para obtener el monto de la beca
        return montoBeca;
    }
};