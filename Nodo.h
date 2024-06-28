#pragma once
#include <iostream>

class Nodo
{
private:
    int dato;
    Nodo* izq;
    Nodo* der;
    int altura; 
public:
    Nodo(int dato);
    
    int getDato();
    int getAltura();
    Nodo* getIzq();
    Nodo* getDer();
    void setDato(int dato);
    void setAltura(int altura);
    void setIzq(Nodo* izq);
    void setDer(Nodo* der);
    ~Nodo();
};