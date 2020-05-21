//
// Created by jsoto on 19/05/2020.
//

#ifndef UNTITLED_PRESTAMO_H
#define UNTITLED_PRESTAMO_H


class Prestamo {
    private:
        int usuario;
        int libro;
        char fechaInicial[100];
        char fechaFinal[100];
        int estatus;
    public:
        Prestamo();
        Prestamo(int,int,char []);
        void devolucion(char []);
        int getUsuario();
        int getLibro();
        int getEstatus();
        void toString();
};


#endif //UNTITLED_PRESTAMO_H
