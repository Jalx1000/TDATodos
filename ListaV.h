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
	direccion LVanterior(direccion dir);
	direccion LVsiguiente(direccion dir);
	bool LVvacia();
	int LVrecupera(direccion dir);
	int LVlongitud();
	void LVinserta(direccion dir, int elem);
	void LVinserta_primero(int e);
	void LVinserta_ultimo(int e);
	void LVsuprime(direccion dir);
	void LVmodifica(direccion dir, int e);
	string LVtoStr();
};
#endif
