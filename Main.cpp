#include <iostream>
#include <tchar.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "CSMemoria.h"
#include "MLista.h"
#include "LPolinomio.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    LPolinomio p;
    CSMemoria* MiMemoria;
    ListaS* L;
    //constructores

    MiMemoria = new CSMemoria();
    /*cout << "\nLa memoria ------------------------- "<<endl;
	MiMemoria->mostrar();
	cout << "\n Fin Memoria------------------------------ "<<endl;
	*/
    L = new ListaS(MiMemoria);
	//cout << "\n Lista"<<L->to_str()<<endl;
    int z = MiMemoria->new_espacio("fernando.angulo.heredia");
    MiMemoria->mostrar();
    //cout << "\nLa z es: "<<z<<endl;
    MiMemoria->poner_dato(
        z, "->fernando", MiMemoria->obtenerDato(z, "->fernando") + 2);
    //	MiMemoria->mostrar();
    L->inserta_primero(100);
    cout << "\n insertar ultimo ";
    L->inserta_ultimo(200);
    cout << "\n insertar ultimo ";
    L->inserta(L->fin(), 150);
    cout << "\n Lista3" << L->to_str() << endl;
    MiMemoria->mostrar();


//    p.poner_termino(2, 3);         //bucle infinito poner_termino
//    p.poner_termino(-1, 2);
//    p.poner_termino(5, 0);

	// Mostrar el polinomio
//	std::cout << "\nPolinomio: ";
//	for (int i = 0; i < p.numero_terminos(); i++) {
//		int coeficiente = p.coeficiente(i);
//		int exponente = p.exponente(i);
//
//		if (coeficiente != 0) {
//			if (coeficiente > 0 && i != 0) {
//				std::cout << "+";
//			}
//			std::cout << coeficiente;
//
//			if (exponente > 0) {
//				std::cout << "x^" << exponente;
//			}
//
//
//		}
//	}
//	std::cout << std::endl;
	LPolinomio r;
	p.poner_termino(2, 0);
	 r.poner_termino(1, 1);
//	 cout << area(p, -2, 2) << endl; ;
//	 cout << area(r, -1, 1) << endl; ; */

	p.poner_termino(-1, 2);
	p.poner_termino(1, 3);
	system("PAUSE");
    return 0;
}
