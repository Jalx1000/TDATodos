﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "CRSMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
#include <iomanip>
using namespace std;

void CSRMatriz::definir_valor_repetido(elemento valor)
{
    repe = valor;
    valor_repetido_definido = true;
}

int CSRMatriz::obtener_valor_repetido() {
	if (valor_repetido_definido) {
		return repe;
	} else {
		// Manejar el caso en el que el valor repetido no ha sido definido
		// Aquí puedes lanzar una excepción, retornar un valor por defecto, etc.
		// En este ejemplo, se retorna 0.
		return 0;
	}
}


CSRMatriz::CSRMatriz()
{
    df = 0;
    dc = 0;
    repe = 0;
    nt = 0;

	for (int k = 1; k < df + 1; k++) {
//		for(int j=1 ; j<dc+1;j++){
			vf[k] = 1;
			vc[k] = 1;
//		}
	}
    valor_repetido_definido = false;
}

void CSRMatriz::dimensionar(int nf, int nc)
{
    df = nf;
    dc = nc;
}

int CSRMatriz::dimension_fila()
{
	cout<<df;
	return df;
}

int CSRMatriz::dimension_columna()
{
    cout<<dc;
	return dc;
}

int CSRMatriz::existe_elemento(indice f, indice c)
{
    int Existe_lugar = 0;
    int lug_antes = 0;

	for (int I = 1; I <= (f - 1); I++) {
		lug_antes = lug_antes + (vf[I + 1] - vf[I]);
	}

	int max_elem_fila = (vf[f + 1] - vf[f]);

	for (int i = 1; i <= max_elem_fila; i++) {
        if (vc[lug_antes + i] == c) {
            Existe_lugar = lug_antes + i;
        }
    }

    return Existe_lugar;
}

int CSRMatriz::donde_insertar(indice f, indice c)
{
    int lug_antes = 0;

	for (int I = 1; I < (f - 1); I++) {
        lug_antes = lug_antes + (vf[I + 1] - vf[I]);
    }

    int nuevo_lugar = lug_antes;
    int lugar = lug_antes;

    for (int i = 1; i < (vf[f + 1] - vf[f]); i++) {
        lugar = lug_antes + i;
        if (c > vc[lugar]) {
            nuevo_lugar = lugar;
        }
    }

    nuevo_lugar = nuevo_lugar + 1;

    return nuevo_lugar;
}

void CSRMatriz::poner(indice f, indice c, elemento valor)
{
    int Lugar = existe_elemento(f, c);

    if (Lugar != 0) {
        vd[Lugar] = valor;
    } else {
        Lugar = donde_insertar(f, c);

        // Desplazando vd, vc para insertar el nuevo elemento
        int i = nt + 1;
        while (i >= (Lugar + 1)) {
            vd[i] = vd[i - 1];
            vc[i] = vc[i - 1];
            i = i - 1;
        }

        vd[Lugar] = valor;
        vc[Lugar] = c;
        nt = nt + 1;

        // Ajustando los valores del vector comprimido
        for (int i = f + 1; i <= df + 1; i++) {
            vf[i] = vf[i] + 1;
        }
    }
}

int CSRMatriz::Elemento(int f, int c)
{
    if ((f >= 1 && f <= df) && (c >= 1 && c <= dc)) {
        int lugar = existe_elemento(f, c);
        int elem;

        if (lugar == 0) {
            elem = repe;
        } else {
            elem = vd[lugar];
        }

        return elem;
    }

    // En caso de que la posición esté fuera de rango, retornar un valor por defecto
    return 0;
}


void CSRMatriz::mostrar() {
    for (int i = 1; i <= df; i++) {
        for (int j = 1; j <= dc; j++) {
            int elem = Elemento(i, j);
            cout << "[" << elem << "]";
        }
        cout << endl;
    }

cout<<"DF: "<<df<<"\n"<<endl;
//cout<<"Dc: "<<dc<<"\n"<<endl;
//cout<<"elem: "<<elem<<"\n"<<endl;
}

