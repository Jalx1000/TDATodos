﻿//---------------------------------------------------------------------------

#ifndef CRSMatrizH
#define CRSMatrizH
//---------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;


const long int MAX = 10000;

class CSRMatriz
{
    typedef int elementos;
    typedef int elemento;
    typedef int indice;
  private:
    int vf[MAX];
    int vc[MAX];
    elementos vd[MAX];
    int df, dc;
    elemento repe;
    int nt;

    int existe_elemento(indice f, indice c);
    int donde_insertar(indice f, indice c);
    bool valor_repetido_definido;
    //    bool verificarRango(indicef, indice c);
    //    void eliminar(indice f, indice c);
  public:
    CSRMatriz();
    void dimensionar(int df, int dc);
    int dimension_fila();
    int dimension_columna();
    void poner(indice f, indice c, elemento valor);
    elemento Elemento(indice f, indice c);
    void definir_valor_repetido(elemento valor);
    int obtener_valor_repetido();

    void mostrar();
};
#endif

