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
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    VCola Cola;
    VCola2 Cola2;

    Cola.poner(10);
    Cola.poner(20);
    Cola.poner(30);
    Cola.poner(40);
    Cola.poner(50);

    Cola2.poner(10);
    Cola2.poner(20);
    Cola2.poner(30);
    Cola2.poner(40);
    Cola2.poner(50);

    Cola.mostrarVCola(Cola);
    tipo_elemento elemento;
    Cola.sacar(elemento);
    Cola.mostrarVCola(Cola);
    Cola.sacar(elemento);
    Cola.mostrarVCola(Cola);
    Cola.sacar(elemento);
    Cola.mostrarVCola(Cola);

    Cola2.mostrarVCola(Cola2);
    Cola2.sacar(elemento);
    Cola2.mostrarVCola(Cola2);
    Cola2.sacar(elemento);
    Cola2.mostrarVCola(Cola2);
    Cola2.sacar(elemento);
    Cola2.mostrarVCola(Cola2);

    system("PAUSE");
    return 0;
}

