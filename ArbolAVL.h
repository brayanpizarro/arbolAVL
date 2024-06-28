#pragma once
#include <iostream>
#include "Nodo.h"

class ArbolAVL{
private:
    Nodo* raiz;
public:
    ArbolAVL();
    Nodo* getRaiz();
    int altura(Nodo* nodo);
    int factorBalance(Nodo* nodo);
    Nodo* rotacionDer(Nodo* nodo);
    Nodo* rotacionIzq(Nodo* nodo);
    
    void insertarNodo(int _dato);
    Nodo* insertarNodo(Nodo* nodo,int _dato);
    void recorridoPreOrderRID(Nodo* actual);
    void recorridoInOrdenIRD(Nodo* actual);
    void recorridoPosOrdenIDR(Nodo* actual);
    void recorridoPorNivel(Nodo* actual);
    ~ArbolAVL();
};