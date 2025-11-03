/*Defina las clases Mamifero, Felino y Gatoomestico. Decida que atributos y métodos incluir de tal manera que su programa pueda:
a)	Declarar un objeto llamado minino de tipo GatoDomesico y otro llamado estrellaCirco de tipo felino.
b)	Imprimir la dieta del minino y estrellaCirco.
c)	Imprimir el año y lugar de nacimiento de minino y estrellaCirco.
d)	Cambiar el nombre del dueño de minino.
e)	Imprimir la raza de minino y estrellaCirco.
f)	Cambiar le nombre del circo  en el que actúa estrellaCirco.
*/
#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;

int main(int argc, char **argv)
{
    GatoDomestico* minino = new GatoDomestico(2015, "Trujillo", "GatoPersa");
    Felino* estrellaCirco = new Felino(2014, "India", "De Bengala", "Circo Royal");

    cout << "Dietas; " << endl;
    cout << "Minino: " << minino->imprimirDieta() << endl;
    cout << "Felino: " << estrellaCirco->imprimirDieta() << endl;

    cout << "\nAnio de Nacimiento y Lugar de Nacimiento: " << endl;
    cout << "Minino: " << minino->getAnioNacimiento() << " - " << minino->getLugarNacimiento() << endl;
    cout << "Felino: " << estrellaCirco->getAnioNacimiento() << " - " << estrellaCirco->getLugarNacimiento() << endl;

    cout << "\nCambiar el nombre del duenio de Gato: " << endl;
    string nuevoDuenio;
    cout << "Digite el nombre del nuevo duenio: ";
    getline(cin, nuevoDuenio);
    minino->setNombreDuenio(nuevoDuenio);
    cout << "El nuevo duenio es: " << minino->getNombreDuenio() << endl;

    cout << "\nRaza: " << endl;
    cout << "Gato: " << minino->getRaza() << endl;
    cout << "Felino: " << estrellaCirco->getRaza() << endl;

    cout << "\nCambiar el nombre del circo: " << endl;
    string nuevoCirco;
    cout << "Digite el nombre del nuevo circo: ";
    getline(cin, nuevoCirco);
    estrellaCirco->setNombreCirco(nuevoCirco);
    cout << "El nuevo circo es: " << estrellaCirco->getNombreCirco() << endl;

    delete minino;
    delete estrellaCirco;

    return 0;
    
}
