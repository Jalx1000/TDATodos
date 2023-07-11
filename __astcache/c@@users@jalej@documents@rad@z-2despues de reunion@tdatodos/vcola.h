//---------------------------------------------------------------------------

#ifndef VColaH
#define VColaH
//---------------------------------------------------------------------------

class VCola
{
  private:
    typedef int tipo_elemento;
	int MAX = 100;
    tipo_elemento V[MAX];
	int init;
    int Dir;
  public:
    crear();
    bool vacia();
    void Poner(tipo_elemento E);
    void Sacar(tipo_elemento* E);
    tipo_elemento Primero();
};

#endif

