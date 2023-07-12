﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "VCola2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
#include <string>
using namespace std;

void VCola2::desplazar2(int d)
{
    if (!vacia2()) {
        for (int i = ini2; i <= fin2; i++) {
            VC2[i] = VC2[i + d];
        }
        //	fin2--;
    }
}

VCola2::VCola2()
{
    fin2 = 0;
    ini2 = 1;
}
bool VCola2::vacia2()
{
    return (ini2 > fin2);
}
void VCola2::poner2(tipo_elemento E)
{
    if (fin2 < MAX2) {
        fin2 = fin2 + 1;
        VC2[fin2] = E;
    }
}
void VCola2::sacar2(tipo_elemento &E)
{
    if (!vacia2()) {
        E = VC2[ini2];
        desplazar2(1);
        fin2 = fin2 - 1;
    }
}
tipo_elemento VCola2::primero2() {}

void VCola2::mostrarVCola2(VCola2 cola)
{
    for (int i = cola.ini2; i <= cola.fin2; i++) {
        cout << cola.VC2[i] << " ";
    }
    cout << endl;
}

