//---------------------------------------------------------------------------

#ifndef VCola2H
#define VCola2H
//---------------------------------------------------------------------------

typedef int tipo_elemento;
const int MAX2 = 100;

class VCola2
{
private:
	int VC2[MAX2];
	int ini;
	int fin;

public:
	VCola2();
	bool vacia();
	void poner(tipo_elemento E);
	void sacar(tipo_elemento &E);
	tipo_elemento primero();
	void desplazar(int d);
	void mostrarVCola(VCola2 cola);
};

#endif
