#include "ArbolAVL.h"
#include <algorithm>
using namespace std;
ArbolAVL::ArbolAVL(){
    this->raiz=nullptr;
}
Nodo* ArbolAVL::getRaiz(){
    return raiz;
}
void  ArbolAVL::insertarNodo(int _dato){
    this->raiz=insertarNodo(raiz,_dato);
}
int ArbolAVL::altura(Nodo* nodo){
    if(nodo== nullptr){
        return 0;
    }
    return nodo->getAltura();
}
int ArbolAVL::factorBalance(Nodo* nodo){
    if(nodo==nullptr){
        return 0;
    }
    return nodo->getIzq()->getAltura() - nodo->getDer()->getAltura();
}
Nodo* ArbolAVL::rotacionDer(Nodo* nodo){
    Nodo* izq=nodo->getIzq();
    Nodo* tem=nodo->getDer();

    izq->setDer(nodo);
    nodo->setIzq(tem);

    izq->setAltura(1+max(izq->getIzq()->getAltura(),izq->getDer()->getAltura()));
    nodo->setAltura(1+max(nodo->getIzq()->getAltura(),nodo->getDer()->getAltura()));

    return izq;
}
Nodo* ArbolAVL::rotacionIzq(Nodo* nodo){
    Nodo* der=nodo->getDer();
    Nodo* tem=nodo->getIzq();

    
}
Nodo* ArbolAVL::insertarNodo(Nodo* actual,int _dato){
    if(actual==nullptr){
        Nodo* nuevo=new Nodo(_dato);
        return nuevo;
    }
    else if(_dato<actual->getDato()){
        actual->setIzq(insertarNodo(actual->getIzq(),_dato));
       
    }else if(_dato>actual->getDato()){
        actual->setDer(insertarNodo(actual->getDer(),_dato));
    }
    
    actual->setAltura(1+max(actual->getIzq()->getAltura(),actual->getDer()->getAltura()));

}
