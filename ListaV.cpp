//---------------------------------------------------------------------------

#pragma hdrstop

#include "ListaV.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

ListaV::ListaV()
{
  this->longi = 0;
}

direccion ListaV::LVfin()
{
  if (this->LVvacia())
  {
    cout << "LISTA VACIA\n";
  }
  else
  {
    return this->longi - 1;
  }
}

direccion ListaV::LVprimero()
{
  if (!this->LVvacia())
  {
    return 0;
  }
  else
  {
    return 0;
  }
}

direccion ListaV::LVsiguiente(direccion p)
{
  if (this->LVvacia())
  {
    cout << "LISTA VACIA\n";
  }
  else
  {
    if (p + 1 == longi)
      return p + 1;
    else
      return p + 1;
  }
}

direccion ListaV::LVanterior(direccion p)
{
  if (this->LVvacia())
  {
    cout << "LISTA VACIA\n";
  }
  else
  {
    if (p == 0)
      cout << "POSICION INCORRECTA\n";
    else
      return p - 1;
  }
}

int ListaV::LVrecupera(direccion p)
{
  if (this->LVvacia())
  {
    cout << "LISTA VACIA\n";
  }
  else
  {
    if (p >= 0 && p < longi)
      return this->elementos[p];
    else
      cout << "POSICION INCORRECTA\n";
  }
}

void ListaV::LVinserta(direccion p, int elem)
{
  if (longi == maxVect)
  {
    cout << "LISTA LLENA\n";
  }
  else if (this->LVvacia())
  {
    elementos[0] = elem;
    longi++;
  }
  else if (p >= 0 && p <= longi)
  {
    for (int i = longi; i > p; i--)
    {
      this->elementos[i] = this->elementos[i - 1];
    }
    this->elementos[p] = elem;
    this->longi++;
  }
  else
  {
    cout << "POSICION INCORRECTA\n";
  }
}

void ListaV::LVsuprime(direccion p)
{
  if (longi == 0)
  {
    cout << "LISTA VACIA\n";
  }
  else if (p >= 0 && p <= longi - 1)
  {
    for (int i = p; i < longi - 1; i++)
    {
      this->elementos[i] = this->elementos[i + 1];
    }
    longi--;
  }
  else
  {
    cout << "POSICION INCORRECTA\n";
  }
}

void ListaV::LVmodifica(direccion p, int elem)
{
  if (longi == 0)
  {
    cout << "LISTA VACIA\n";
  }
  else if (p >= 0 && p <= longi - 1)
  {
    elementos[p] = elem;
  }
  else
  {
    cout << "POSICION INCORRECTA\n";
  }
}

bool ListaV::LVvacia()
{
  return longi == 0;
}

int ListaV::LVlongitud()
{
  return this->longi;
}

string ListaV::LVtoStr()
{
  string r = "[";
  for (int i = 0; i < longi; i++)
  {
    int e = elementos[i];
    r = r + to_string(e);
    if (i < longi - 1)
      r = r + ",";
  }
  r = r + "]";
  return r;
}

void ListaV::LVinserta_primero(int e)
{
  LVinserta(0, e);
}

void ListaV::LVinserta_ultimo(int e)
{
  LVinserta(longi, e);
}