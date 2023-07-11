//---------------------------------------------------------------------------

#pragma hdrstop

#include "ColaL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ColaL::ColaL()
{
  L = new ListaS;
}

bool ColaL::vacia()
{
  return L->vacia();
}

void ColaL::Poner(int E)
{
  L->inserta(L->inserta(), E);
}

void ColaL::Sacar(int &E)
{
  L->recupera(L->fin(), E);
  L->suprime(L->fin());
}
int ColaL::Primero()
{
  L->recupera(L->fin(), E);
  return E;
}
