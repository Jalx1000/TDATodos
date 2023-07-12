//---------------------------------------------------------------------------

#pragma hdrstop

#include "VCola2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
#include <string>
using namespace std;

void VCola2::desplazar(int d)
{
  if (!vacia())
  {
    for (int i = VC2[ini]; i <= VC2[fin]; i++)
    {
      VC2[i - d] = VC2[i];
    }
  }
}

VCola2::VCola2()
{
  ini = 1;
  fin = 0;
}
bool VCola2::vacia()
{
}
void VCola2::poner(tipo_elemento E)
{
  if (fin < MAX)
  {
    fin++;
    VC2[fin] = E;
  }
}
void VCola2::sacar(tipo_elemento &E)
{
  if (!vacia())
  {
    E = VC2[1];
    desplazar(1);
    fin--;
  }
}
tipo_elemento VCola2::primero() {}
void VCola2::mostrarVCola(VCola2 cola) {}
