//
// Created by gusta on 24/03/2018.
//

#ifndef TAREAPUNTEROS_FRACCION_H
#define TAREAPUNTEROS_FRACCION_H

#include <iostream>

class Fraccion {
//Atributos de la clase.
protected:
int numerador,denominador;
//Metodos de la clase
public:
//Constructor
Fraccion(int n,int d);
//Operadores
friend Fraccion operator + (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator - (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator * (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator / (const Fraccion &f1, const Fraccion &f2);
/*friend Fraccion operator < (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator > (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator <=(const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator >=(const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator == (const Fraccion &f1, const Fraccion &f2);
friend Fraccion operator != (const Fraccion &f1, const Fraccion &f2);*/
friend bool operator< (const Fraccion &f1, const Fraccion &f2);
friend bool operator> (const Fraccion &f1, const Fraccion &f2);
friend bool operator<=(const Fraccion &f1, const Fraccion &f2);
friend bool operator>=(const Fraccion &f1, const Fraccion &f2);
friend bool operator==(const Fraccion &f1, const Fraccion &f2);
friend bool operator!=(const Fraccion &f1, const Fraccion &f2);
//Método toString()
std::string toString();
};


#endif //TAREAPUNTEROS_FRACCION_H
