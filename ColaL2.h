//---------------------------------------------------------------------------

#ifndef ColaL2H
#define ColaL2H
//---------------------------------------------------------------------------
#import "ListaV.h"

class ColaL2
{
  private:
    ListaV* L;
  public:
    ColaL2();
    void vacia();
    void poner(int e);
    void sacar(int &e);
    void primero();
    ;
};

#endif

