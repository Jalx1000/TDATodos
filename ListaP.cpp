//---------------------------------------------------------------------------

#pragma hdrstop

#include "ListaP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PilaP::PilaP()
{
    tope = NULL;
}
bool PilaP::vacia()
{
    return tope == NULL;
}
void PilaP::meter(int e)
{
    direccion x = new NodoP;
    x->elemento = e;
    x->sig = tope;
    tope = x;
}
void PilaP::sacar(int &e)
{
    e = tope->elemento;
    direccion ant = tope;
    tope = ant->sig;
    delete (ant);
}
int PilaP::cima()
{
    return tope->elemento;
}
void PilaP::mostrar()
{
    PilaP aux;
    while (!vacia()) {
        int e = 0;
        sacar(e);
        cout << "[" << e << "]\n";
        aux.meter(e);
    }
    while (!aux.vacia()) {
        int e = 0;
        aux.sacar(e);
        ��meter(e);
        �
    }
}

