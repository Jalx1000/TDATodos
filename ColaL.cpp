//---------------------------------------------------------------------------

#pragma hdrstop

#include "ColaL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ColaL::ColaL()
{
  L = new ListaV;
}

bool ColaL::vacia()
{
  return L->LVvacia();
}

void ColaL::Poner(int E)
{
  L->LVinserta(L->LVprimero(), E);
}

void ColaL::Sacar(int &E)
{
  if (!vacia)
  {
    E = L->LVrecupera(L->LVfin());
    L->LVsuprime(L->LVfin());
  }
}
int ColaL::Primero()
{
  if (!vacia)
  {
    L->LVrecupera(L->LVfin());
  }
}
