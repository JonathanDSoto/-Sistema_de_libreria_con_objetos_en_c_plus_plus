//
// Created by jsoto on 19/05/2020.
//
#include <iostream>
#include "Prestamo.h"
#include <cstring>

using namespace std;

Prestamo::Prestamo() {

}

Prestamo::Prestamo(int usuario, int libro, char fechaInicial[100]) {
   this->usuario = usuario;
   this->libro = libro;
   strcpy(this->fechaInicial,fechaInicial);
   this->estatus = 1;
}

void Prestamo::devolucion(char fechaFinal[100]) {
    strcpy(this->fechaFinal,fechaFinal);
    this->estatus = 0;
}

int Prestamo::getUsuario() {
    return this->usuario;
}

int Prestamo::getLibro() {
    return this->libro;
}

int Prestamo::getEstatus() {
    return this->estatus;
}

void Prestamo::toString() {
    cout << "Fecha Inicial "<< this->fechaInicial << endl;
    if(this->estatus == 1){
        cout << "Estado del prestamo: ocupado"<<endl;
    }else{
        cout << "Estado del prestamo: devuelto"<<endl;
        cout << "Fecha final "<< this->fechaFinal << endl;
    }
}