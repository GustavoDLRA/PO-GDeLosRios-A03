//
// Created by gusta on 24/03/2018.
//

#include "Fraccion.h"
Fraccion::Fraccion(int n, int d) {
    this->numerador=n;
    this->denominador=d;
}

Fraccion operator + (const Fraccion &f1, const Fraccion &f2){
    int rNumerador;
    int rDenominador;
    int cDenominador;
    int nNumerador1;
    int nNumerador2;
    cDenominador = f1.denominador*f2.denominador;
    nNumerador1 = f1.numerador *f2.denominador;
    nNumerador2 = f2.numerador *f1.denominador;
    rNumerador = nNumerador1 +nNumerador2;
    rDenominador = cDenominador;
    Fraccion resultado = *new Fraccion(rNumerador,rDenominador);

/*if(f1.denominador != f2.denominador){
   cDenominador = f1.denominador*f2.denominador;
   nNumerador1 = f1.numerador *f2.denominador;
   nNumerador2 = f2.numerador *f1.denominador;
   rNumerador = nNumerador1 +nNumerador2;
   rDenominador = cDenominador;
   Fraccion resultado = *new Fraccion(rNumerador,rDenominador);
}*/
/*if(f1.denominador == f2.denominador){
    rNumerador = f1.numerador+f2.numerador;
    rDenominador = f1.denominador;
    Fraccion resultado = *new Fraccion(rNumerador,rDenominador);
}*/
    /*rNumerador= f1.numerador +f2.numerador;
    rDenomidador= f1.denominador + f2.denominador;

    Fraccion resultado = *new Fraccion(rNumerador,rDenomidador);*/
}
Fraccion operator - (const Fraccion &f1, const Fraccion &f2){
    int rNumerador;
    int rDenominador;
    int cDenominador;
    int nNumerador1;
    int nNumerador2;

    cDenominador = f1.denominador*f2.denominador;
    nNumerador1 = f1.numerador *f2.denominador;
    nNumerador2 = f2.numerador *f1.denominador;
    rNumerador = nNumerador1 -nNumerador2;
    rDenominador = cDenominador;
    Fraccion resultado = *new Fraccion(rNumerador,rDenominador);
/*if(f1.denominador != f2.denominador){
    cDenominador = f1.denominador*f2.denominador;
    nNumerador1 = f1.numerador *f2.denominador;
    nNumerador2 = f2.numerador *f1.denominador;
    rNumerador = nNumerador1 -nNumerador2;
    rDenominador = cDenominador;
    Fraccion resultado = *new Fraccion(rNumerador,rDenominador);
    }
if(f1.denominador == f2.denominador){
    rNumerador = f1.numerador-f2.numerador;
    rDenominador = f1.denominador;
    Fraccion resultado = *new Fraccion(rNumerador,rDenominador);
    }*/
    /*rNumerador =f1.numerador-f2.numerador;
    rDenominador= f1.denominador -f2.denominador;

    Fraccion resultado = *new Fraccion (rNumerador,rDenominador);*/
}
Fraccion operator * (const Fraccion &f1, const Fraccion &f2){
    int rNumerador;
    int rDenominador;

    rNumerador = f1.numerador *f2.numerador;
    rDenominador = f1.denominador*f2.denominador;

    Fraccion resultado = *new Fraccion (rNumerador,rDenominador);
}
Fraccion operator / (const Fraccion &f1, const Fraccion &f2){
    int rNumerador;
    int rDenominador;

    rNumerador = f1.numerador*f2.denominador;
    rDenominador= f1.denominador*f2.numerador;
    Fraccion resultado = *new Fraccion (rNumerador,rDenominador);
}

bool operator < (const Fraccion &f1, const Fraccion &f2){
    //bool menorQue;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador) ;
    fADecimal2 =float(f2.numerador)/float(f2.denominador) ;

    /*if(fADecimal1<fADecimal2){
        menorQue = true;
        std::cout<<"La fraccion 1 es menor a la fraccion 2\n";
    }
    if(fADecimal1>fADecimal2){
        menorQue= false;
        std::cout<<"La fraccion 1 no es menor a la fraccion 2\n";
    }*/
    return fADecimal1<fADecimal2;

}
bool operator > (const Fraccion &f1, const Fraccion &f2){
    //bool mayorQue;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador);
    fADecimal2 = float(f2.numerador)/float(f2.denominador);

    /*if(fADecimal1>fADecimal2){
        mayorQue = true;
        std::cout<<"La fraccion 1 es mayor a la fraccion 2\n";
    }
    if(fADecimal1<fADecimal2){
        mayorQue=false;
        std::cout<<"La fraccion 1 no es mayor a la fraccion 2\n";
    }*/
    return fADecimal1>fADecimal2;
}

bool operator <= (const Fraccion &f1, const Fraccion &f2){
    //bool menorOIgual;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador);
    fADecimal2 = float(f2.numerador)/float(f2.denominador);

    /*if(fADecimal1<= fADecimal2){
        menorOIgual=true;
        std::cout<<"La fraccion 1 es menor o igual a la fraccion 2\n";
    }
    if(fADecimal1>=fADecimal2){
        menorOIgual = false;
        std::cout<<"La fraccion 1 no es menor o igual a la fraccion 2\n";
    }*/
    return fADecimal1<=fADecimal2;
}

bool operator >= (const Fraccion &f1, const Fraccion &f2){
    //bool mayorOIgual;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador);
    fADecimal2 = float(f2.numerador)/float(f2.denominador);

    /*if (fADecimal1>=fADecimal2){
        mayorOIgual = true;
        std::cout<<"La fraccion 1 es mayor o igual a la fraccion 2\n";
    }
    if(fADecimal1<=fADecimal2){
        mayorOIgual = false;
        std::cout<<"La fraccion 1 no es mayor o igual a la fraccion 2\n";
    }*/
    return fADecimal1>=fADecimal2;
}

bool operator == (const Fraccion &f1, const Fraccion &f2){
    //bool igualQue;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador);
    fADecimal2 = float(f2.numerador)/float(f2.denominador);

    /*if (fADecimal1 == fADecimal2){
        igualQue = true;
        std::cout<<"La fraccion 1 es igual a la fraccion 2\n";
    }
    if(fADecimal1!=fADecimal2){
        igualQue = false;
        std::cout<<"La fraccion 1 no es igual a la fraccion 2\n";
    }*/
    return fADecimal1==fADecimal2;
}
bool operator != (const Fraccion &f1, const Fraccion &f2){
    //bool diferenteA;
    float fADecimal1;
    float fADecimal2;

    fADecimal1 = float(f1.numerador)/float(f1.denominador);
    fADecimal2 = float(f2.numerador)/float(f2.denominador);

    /*if(fADecimal1 != fADecimal2){
        diferenteA = true;
        std::cout<<"La fraccion 1 es diferente a la fraccion 2\n";
    }
    if (fADecimal1 == fADecimal2){
        diferenteA = false;
        std::cout<<"La fraccion 1 no es diferente a la fraccion 2\n";
    }*/
    return fADecimal1!=fADecimal2;
}

std::string Fraccion::toString() {
    std::string num;
    std::string den;
    num = std::to_string(numerador);
    den = std::to_string(denominador);
    return num+"/"+den;
}
