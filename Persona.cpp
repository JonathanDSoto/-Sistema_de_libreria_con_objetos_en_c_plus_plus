//
// Created by jsoto on 11/05/2020.
//
#include <iostream>
#include "Persona.h"
#include <cstring>
using namespace std;

Persona::Persona() {

}

Persona::Persona(char nombres[100], char apellidos[100], char nacionalidad[100]) {

    strcpy(this->nombres,nombres);
    strcpy(this->apellidos,apellidos);
    strcpy(this->nacionalidad,nacionalidad);

}


void Persona::toString() {

    cout << "<====== Información Autor =======>"<<endl;
    cout << "Nombre: "<< this->nombres << endl;
    cout << "Apellidos: "<< this->apellidos << endl;
    cout << "Nacionalidad: "<< this->nacionalidad << endl;
    cout << endl<<endl;
}