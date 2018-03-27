#include <iostream>
#include "Fraccion.h"

int main() {
  Fraccion frac1 (1,4);
  Fraccion frac2 (2,3);
  Fraccion frac3 = frac1+frac2;
  Fraccion frac4 = frac1-frac2;
  Fraccion frac5 = frac1*frac2;
  Fraccion frac6 = frac1/frac2;
  bool p1;
  bool p2;
  bool p3;
  bool p4;
  bool p5;
  bool p6;
std::cout<<"FRACCIONES A UTILIZAR:\n";
std::cout<<"Fraccion 1: ";
std::cout<<frac1.toString();
std::cout<<"\n";
std::cout<<"Fraccion 2: ";
std::cout<<frac2.toString();
std::cout<<"\nOPERACIONES ARITMETICAS\n";
std::cout<<"SUMA DE FRACCIONES\n";
std::cout<<frac3.toString()+ "\n";
std::cout<<"RESTA DE FRACCIONES\n";
std::cout<<frac4.toString()+"\n";
std::cout<<"MULTIPLICACION DE FRACCIONES:\n";
std::cout<<frac5.toString()+"\n";
std::cout<<"DIVISION DE FRACCIONES\n";
std::cout<<frac6.toString()+"\n";
std::cout<<"\n";
std::cout<<"COMIENZAN COMPARACIONES:\n";

    frac1<frac2? p1=true: p1= false;
    std::cout<<"Fraccion1<Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" < ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p1<<"\n";

    frac1>frac2? p2=true: p2= false;
    std::cout<<"Fraccion1>Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" > ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p2<<"\n";

    frac1<=frac2? p3=true: p3= false;
    std::cout<<"Fraccion1<=Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" <= ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p3<<"\n";

    frac1>=frac2? p4=true: p4= false;
    std::cout<<"Fraccion1>=Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" >= ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p4<<"\n";

    frac1==frac2? p5=true: p5= false;
    std::cout<<"Fraccion1==Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" == ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p5<<"\n";

    frac1!=frac2? p6=true: p6= false;
    std::cout<<"Fraccion1!=Fraccion2\n";
    std::cout<<frac1.toString();
    std::cout<<" != ";
    std::cout<<frac2.toString();
    std::cout<<" Resultado = "<<p6<<"\n";
    return 0;
}