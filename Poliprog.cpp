/*Considere la siguiente relación de herencia, la cual involucra tres clases: alumno, Deportista y BecaDeporte. Esta ultima representa a aquellos alumnos que son deportistas y que por esa razón han recibido una beca especial del gobierno para premiar sus esfuerzos. Decia que atributos y métodos incluir de tal manera que su programa pueda:
A)	Declarar dos objetos llamados alumnoJuan y alumnoPedro de tipo Alumno.
B)	Delcarar un objeto llamado deporLuis de tipo Deportista.
C)	Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeportista.
D)	Imprimir los datos de todos los objetos declarados.
E)	Actualizar el nombre de la carrera que están estudiando alumnoJuan y bdAna. El dato dado por el usuario sera el nombre de la nueva carrera.
F)	Actualizar el nombre del entrenador deporLuis y bdCarmen. El dato por el usuario será el nombre del nuevo entrenador.
G)	Actualizar el monto de la beca de bdAna y bdCarmen. El dato ddado por el usuario será el porcentaje de incremento de la beca actual.*/
#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "Deporte.h"
using namespace std;

int main(int argc, char **argv)
{
    Alumno *alumnoJuan = new Alumno("Ingenieria de Sistemas");
    Alumno *alumnoPedro = new Alumno("Medicina");
    Deportista *deporLuis = new Deportista("Naruto Uzumaki");
    BecadoDeporte *bdAna = new BecadoDeporte("Administracion", "Sakura Haruno", 1500);
    BecadoDeporte *bdCarmen = new BecadoDeporte("Derecho", "Kakashi Hatake", 2000);

    cout << "\t\nMostrando datos: " << endl;
    cout << "\nMostrando datos de alumnoJuan: " << endl;
    alumnoJuan->mostrarDatos();
    cout << "\nMostrando datos de alumnoPedro: " << endl;
    alumnoPedro->mostrarDatos();
    cout << "\nMostrando datos de deporLuis: " << endl;
    deporLuis->mostrarDatos();
    cout << "\nMostrando datos de bdAna: " << endl;
    bdAna->mostrarDatos();
    cout << "\nMostrando datos de bdCarmen: " << endl;
    bdCarmen->mostrarDatos();

    string nuevaCarrera;
    cout << "\nDigite el nombre de la carrera de alumnoJuan: ";
    getline(cin, nuevaCarrera);
    alumnoJuan->setNombreCarrera(nuevaCarrera);
    cout << "Digite la nueva carrera de bdAna: ";
    getline(cin, nuevaCarrera);
    bdAna->setNombreCarrera(nuevaCarrera);
    cout << "\nLa nueva carrera de alumnoJuan es: " << alumnoJuan->getNombreCarrera() << endl;
    cout << "La nueva carrera de bdAna es: " << bdAna->getNombreCarrera() << endl;

    string nuevoEntrenador; // apartado f resuelto
    cout << "\nDigite el nombre del nuevo entrenador de deporLuis: ";
    getline(cin, nuevoEntrenador);
    deporLuis->setNombreEntrenador(nuevoEntrenador);
    cout << "Digite el nombre del nuevo entrenador de bdCarmen: ";
    getline(cin, nuevoEntrenador);
    bdCarmen->setNombreEntrenador(nuevoEntrenador);
    cout << "\nEl nuevo entrenador de deporLuis es: " << deporLuis->getNombreEntrenador() << endl;
    cout << "El nuevo entrenador de bdCarmen es: " << bdCarmen->getNombreEntrenador() << endl;

    float incremento;
    cout << "\nDigite el incremento de bdAna: ";
    cin >> incremento;
    bdAna->setMontoBeca(incremento);
    cout << "Digite el incremento de bdCarmen: ";
    cin >> incremento;
    bdCarmen->setMontoBeca(incremento);
    cout << "\nEl nuevo monto de la beca de bdAna es: " << bdAna->getMontoBeca() << endl;
    cout << "El nuevo monto de la beca de bdCarmen es: " << bdCarmen->getMontoBeca() << endl;

    delete alumnoPedro;
    delete deporLuis;
    delete bdAna;
    delete alumnoJuan;
    return 0;
}