//
// Created by jsoto on 14/05/2020.
//
#include <iostream>
#include "Libro.h"
#include <cstring>
using namespace std;


Libro::Libro() {

}

Libro::Libro(char titulo[100], Persona autor, int annio, char genero[100], char editorial[100], char isbn[100]) {
   strcpy(this->titulo,titulo);
   this->autor = autor;
   this->annio = annio;
   strcpy(this->genero,genero);
   strcpy(this->editorial,editorial);
   strcpy(this->isbn,isbn);
}

void Libro::update(char titulo[100], Persona autor, int annio, char genero[100], char editorial[100], char isbn[100]) {
    strcpy(this->titulo,titulo);
    this->autor = autor;
    this->annio = annio;
    strcpy(this->genero,genero);
    strcpy(this->editorial,editorial);
    strcpy(this->isbn,isbn);
}

void Libro::getAutor() {
    this->autor.toString();
}

void Libro::toString() {
    cout << "Información del libro"<<endl;
    cout << "Titulo: "<< this->titulo<<endl;
    this->autor.toString();
    cout << "Annio: "<< this->annio<<endl;
    cout << "Genero: "<< this->genero<<endl;
    cout << "Editorial: "<< this->editorial<<endl;
    cout << "ISBN: "<< this->isbn<<endl;

}