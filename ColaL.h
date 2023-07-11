//---------------------------------------------------------------------------

#ifndef ColaLH
#define ColaLH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "ListaV.h"
using namespace std;

class ColaL
{
private:
  ListaV *L;
public:
  ColaL();
  bool vacia();
  void Poner(int E);
  void Sacar(int &E);
  int Primero();
};

#endif
