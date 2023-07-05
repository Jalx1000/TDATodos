﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "LPolinomio.h"
#include <iomanip>
#include <iostream>
//#include <string>
#include <sstream>

//---------------------------------------------------------------------------
#pragma package(smart_init)

LPolinomio::LPolinomio()
{
    CSMemoria* MiMemoria;
    ListaS* L;
    pol = ListaS();
    //llamar al contructor de Pol;
}

//OJO AL NULO

direccion LPolinomio::BuscarExponente(int exp)
{
    int dir = pol.siguiente(pol.primero());

    if (dir != NULO) {
        int dirExp = NULO;
        while (dir != NULO && dirExp == NULO) {
            if (pol.recupera(dir) == exp) {
                dirExp = dir;
            }

            dir = pol.siguiente(pol.siguiente(dir));
        }
        return dirExp;
    }
    cout << "Polinomio no tiene terminos";
}

direccion LPolinomio::BuscarTerminoN(int i)
{
    int dir = pol.primero();
    int nt = 0;
    int dirTer = NULO;

    if (dir != NULO) {
        while ((dir != NULO) && (dirTer == NULO)) {
            nt++;
            if (nt == i) {
                dirTer = dir;
            }
            dir = pol.siguiente(dir);
            ;
        }
        return dirTer;
    } else {
        cout << "Polinomio no tiene termino";
    }
}

bool LPolinomio::esCero()
{
    return pol.longitud() == 0;
}

int LPolinomio::grado()
{
    int dir = pol.siguiente(pol.primero());

    if (dir != NULO) {
        int MaxG = pol.recupera(dir);
        while (dir != NULO) {
            if (pol.recupera(dir) > MaxG) {
                MaxG = pol.recupera(dir);
            }
            dir = pol.siguiente(pol.siguiente(dir));
        }
        return MaxG;
    } else {
        return 0;
    }
}

int LPolinomio::coeficiente(int exp)
{
    int dir = BuscarExponente(exp);
    if (dir != NULO) {
        return pol.recupera(pol.anterior(dir));
    } else {
        return 0;
        cout << "Pol no tiene termino";
    }
}

void LPolinomio::asignarCoef(int coef, int exp)
{
    int dir = BuscarExponente(exp);
    if (dir != NULO) {
        int dircoef = pol.anterior(dir);
        pol.modifica(dircoef, exp);
        if (coef == 0) {
            pol.suprime(dir);
            pol.suprime(dircoef);
        }
    }
}

//void LPolinomio::poner_termino(int coef, int exp)
//{
//	int direxp = BuscarExponente(exp);
//	if (direxp != NULO) {
//		int dircoef = pol.anterior(direxp);
//		pol.modifica(dircoef, pol.recupera(dircoef) + coef);
//		if (pol.recupera(dircoef) == 0) {
//			pol.suprime(direxp);
//			pol.suprime(dircoef);
//		}
//	} else {
//		if (coef != 0) {
//			pol.inserta_ultimo(exp); //realizar este metodo
//			pol.inserta(pol.fin(), coef); //realizar este metodo
//		}
//	}
//}

void LPolinomio::poner_termino(int coef, int exp) {
	if (coef != 0 && exp >= 0) {
		int dir_exp = BuscarExponente(exp);
		if (dir_exp != NULO) { // Modifica
			int dir_coef = pol.anterior(dir_exp);
			int nuevo_coef = pol.recupera(dir_coef) + coef;
			pol.modifica(dir_coef, nuevo_coef);
			if (nuevo_coef == 0) {
				pol.suprime(dir_exp);
				pol.suprime(dir_coef);
			}
		}
		else { // Insercion
			pol.inserta_ultimo(exp);
			pol.inserta(pol.fin(), coef);
		}
	}
}

int LPolinomio::numero_terminos()
{
    return pol.longitud() / 2;
}

int LPolinomio::exponente(int nroter) //devuelve el grado
{
    int dir = BuscarTerminoN(nroter);
    if (dir != NULO) {
        return pol.recupera(pol.siguiente(dir));
    } else {
        cout << "NO EXISTE ESE NUMERO DE TERMINO\n";
    }
}

void LPolinomio::sumar(LPolinomio p1, LPolinomio p2)
{
    pol.anula();
    for (int i = 1; i <= p1.numero_terminos(); i++) {
        int ex = p1.exponente(i);
        int co = p1.coeficiente(ex);
        poner_termino(co, ex);
    }

    for (int i = 1; i < p2.numero_terminos(); i++) {
        int ex = p2.exponente(i);
        int co = p2.coeficiente(ex);
        poner_termino(co, ex);
    }
}

void LPolinomio::restar(LPolinomio p1, LPolinomio p2)
{
    pol.anula();
    for (int i = 0; i <= p1.numero_terminos(); i++) {
        int ex = p1.exponente(i);
        int co = p1.exponente(ex);
        poner_termino(co, ex);
    }

    for (int i = 0; i <= p2.numero_terminos(); i++) {
        int ex = p2.exponente(i);
        int co = p2.coeficiente(ex) * -1;
        poner_termino(co, ex);
    }
}

void LPolinomio::multiplicar(LPolinomio p1, LPolinomio p2)
{
    pol.anula();

    for (int i = 0; i <= p1.numero_terminos(); i++) {
        int ex1 = p1.exponente(i);
        int co1 = p1.coeficiente(co1);
    }
}

