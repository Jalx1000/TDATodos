#include <iostream>
#include <tchar.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "CSMemoria.h"
#include "MLista.h"
#include "LPolinomio.h"
#include "VCola.h"
#include "VCola2.h"
#include "VCola3.h"
#include "PilaP.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    // COLA CON VECTORES V.1

    // VCola Cola;

    // Cola.poner(10);
    // Cola.poner(20);
    // Cola.poner(30);
    // Cola.poner(40);
    // Cola.poner(50);

    // Cola.mostrarVCola(Cola);
    // tipo_elemento elemento;
    // Cola.sacar(elemento);
    // Cola.mostrarVCola(Cola);
    // Cola.sacar(elemento);
    // Cola.mostrarVCola(Cola);
    // Cola.sacar(elemento);
    // Cola.mostrarVCola(Cola);

    // COLA CON VECTORES V.2

    //	VCola2 Cola2;
    //
    //	Cola2.poner2(10);
    //	Cola2.poner2(20);
    //	Cola2.poner2(30);
    //	Cola2.poner2(20);
    //	Cola2.poner2(10);
    //
    //	Cola2.mostrarVCola2(Cola2);
    //	tipo_elemento elemento2;
	//	Cola2.sacar2(elemento2);
    //	Cola2.mostrarVCola2(Cola2);

    // COLA CON VECTORES V.3 CON ERRORES
    //	VCola3 Cola3;
    //	Cola3.poner3(10);
    //	Cola3.poner3(20);
    //	Cola3.poner3(30);
    //	Cola3.poner3(40);
    //
    //	Cola3.mostrarVCola3(Cola3);
    //	cout<<"\n";
    //	Cola3.poner3(50);
    //	Cola3.mostrarVCola3(Cola3);

    PilaP pilap;

	pilap.meterPP(10);
	pilap.meterPP(20);
	pilap.meterPP(30);
	pilap.meterPP(40);
	pilap.mostrarPP();

	cout << "\n";

	int elementoSacar;
	pilap.sacarPP(elementoSacar);
    cout << "\n";
    pilap.mostrarPP();
    system("PAUSE");
    return 0;
}

