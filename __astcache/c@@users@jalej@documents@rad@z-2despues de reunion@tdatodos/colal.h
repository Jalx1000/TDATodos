//---------------------------------------------------------------------------

#ifndef ColaLH
#define ColaLH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "MLista.h"
using namespace std;

class ColaL
{
  private:
    ListaS* L;
  public:
    ColaL();
    bool vacia();
    void Poner(int E);
    void Sacar(int &E);
    int Primero();
};

#endif

