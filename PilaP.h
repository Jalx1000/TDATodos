//---------------------------------------------------------------------------

#ifndef PilaPH
#define PilaPH
//---------------------------------------------------------------------------

struct NodoP
{
  int elemento;
  NodoP *sig;
};

typedef NodoP *direccionPP;

class PilaP
{
private:
  direccionPP tope;

public:
  PilaP();
  bool vaciaPP();
  void meterPP(int e);
  void sacarPP(int &e);
  int cimaPP();
  void mostrarPP();
};
#endif
