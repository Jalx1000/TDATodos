//---------------------------------------------------------------------------

#pragma hdrstop

#include "PilaP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
using namespace std;

//---------------------------------------------------------------------------
PilaP::PilaP()
{
    tope = new NodoP;
    tope->sig = NULL;
}
bool PilaP::vaciaPP()
{
    return tope == NULL;
}

// void PilaP::meter(int e)
//{
//	direccionPP x = new NodoP;
//	x->elemento = e;
//	x->sig = tope;
//	tope = x;
// }

void PilaP::meterPP(int e)
{
    direccionPP x = new NodoP;
    x->elemento = e;
    if (vaciaPP())
    {
        x->sig = NULL;
    }
    else
    {
        x->sig = tope;
    }
    tope = x;
}

void PilaP::sacarPP(int &e)
{
    if (!vaciaPP())
    {
        e = tope->elemento;
        direccionPP ant = tope;
        tope = ant->sig;
        delete (ant);
    }
}

int PilaP::cimaPP()
{
    return tope->elemento;
}

void PilaP::mostrarPP()
{
    PilaP aux;
    while (!vaciaPP())
    {
        int e = 0;
        sacarPP(e);
        cout << "[" << e << "]\n";
        aux.meterPP(e);
    }
    while (!aux.vaciaPP())
    {
        int e = 0;
        aux.sacarPP(e);
        meterPP(e);   
    }
}
