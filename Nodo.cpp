#include "Nodo.h"
#include <iostream>

Nodo::Nodo(int _dato){
    this->dato=_dato;
    this->izq=nullptr;
    this->der=nullptr;
    this->altura=1;
}

int Nodo::getDato(){
    return dato;
}
int Nodo::getAltura(){
    return altura;
}
Nodo* Nodo::getDer(){
    return der;
}
Nodo* Nodo::getIzq(){
    return izq;
}
void Nodo::setDato(int _dato){
    this->dato=_dato;
}
void Nodo::setAltura(int _altura){
    this->altura=_altura;
}
void Nodo::setIzq(Nodo* _izq){
    this->izq=_izq;
}
void Nodo::setDer(Nodo* _der){
    this->der=_der;
}
Nodo::~Nodo(){}