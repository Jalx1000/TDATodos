//---------------------------------------------------------------------------

#pragma hdrstop

#include "ListaP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pila_ptr::Pila_ptr()
{
    tope = NULL;
}
bool Pila_ptr::vacia()
{
    return tope == NULL;
}
void Pila_ptr::meter(int e)
{
    direccion x = new NodoP;
    x->elemento = e;
    x->sig = tope;
    tope = x;
}
void Pila_ptr::sacar(int &e)
{
    e = tope->elemento;
    direccion ant = tope;
    tope = ant->sig;
    delete (ant);
}
int Pila_ptr::cima()
{
    return tope->elemento;
}
void Pila_ptr::mostrar()
{
    Pila_ptr aux;
    while (!vacia()) {
        int e = 0;
        sacar(e);
        cout << "[" << e << "]\n";
        aux.meter(e);
    }
    while (!aux.vacia()) {
        int e = 0;
        aux.sacar(e);
          meter(e);
         
    }
}
