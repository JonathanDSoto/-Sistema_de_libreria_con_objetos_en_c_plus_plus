//
// Created by jsoto on 14/05/2020.
//

#ifndef UNTITLED_LIBRO_H
#define UNTITLED_LIBRO_H
#include "Persona.h"

class Libro {
    private:
        char titulo[100];
        Persona autor;
        int annio;
        char genero[100];
        char editorial[100];
        char isbn[100];
    public:
        Libro();
        Libro(char [],Persona,int,char [],char [],char []);
        void update(char [], Persona, int, char[],char [],char []);
        void getAutor();
        void toString();
};


#endif //UNTITLED_LIBRO_H
