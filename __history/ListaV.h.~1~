//---------------------------------------------------------------------------

#ifndef ListaVH
#define ListaVH
#include <iostream>
#include <string>
using namespace std;
//---------------------------------------------------------------------------
typedef int direccion;
const int maxVect = 10;

class ListaV
{
private:
	int elementos[maxVect];
	int longi;

public:
	ListaV();
	direccion LVfin();
	direccion LVprimero();
	direccion LVanterior(direccion);
	direccion LVsiguiente(direccion);
	bool LVvacia();
	int LVrecupera(direccion);
	int LVlongitud();
	void LVinserta(direccion p, int elem);
	void LVinserta_primero(int e);
	void LVinserta_ultimo(int e);
	void LVsuprime(direccion);
	void LVmodifica(direccion, int e);
	string LVtoStr();
};
#endif
