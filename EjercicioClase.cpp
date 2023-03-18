#include <iostream>

using namespace std;

int main() {
//Con un numero ingresado por el usuario calcular el factorial y mostrarlo por pantalla
/*
		float n, calc, factorizacion;

		cout << "Digite el numero que desea factorizar: "; cin >> n << endl;
		factorizacion = 1;

		for (calc = 1; calc <= n; calc++) {
			factorizacion = factorizacion * i;

			cout << "\nLa factorizacion del numero es: "<< factorizacion <<endl;
			}
*/

//Crear la serie fibonacci, primeros 10 numeros
/*
		int n, n1 = 0, n2 = 1, dato = 0;


		cout << "Digite un numero positivo: "; cin >> n;

		dato = n1 + n2;

		while (dato <=n) {
			cout << dato << ", ";
			n1 = n2;
			n2 = dato;

			dato = n1 + n2;

				cout << "Secuencia Fibonacci: " << n1 << ", " << n2 << ", ";

		}
*/

//Con un numero ingresado por el usuario mostrar por pantalla si el numero es primo o no
/*
		int a, b, c = 0;

		cout << "Digite un numero: "; cin >> a;

		for (b = 1; b<= a; b++)
		{
			if ((a % b) == 0){
				c++;
	}
		}
	if (c % 2 ==0 ) {
		cout  <<a<< " es un numero primo." <<endl;
	}
		else {
			cout << a << " no es un numero primo."<<endl;
		}
*/

//Con un numero ingresado por el usuario mostrar por pantalla si el numero es par o no
/*
		int n;

		cout << "Digite un numero: "; cin >> n;

		if (n%2==0) {
			cout <<n<< " es numero par.";
		}else {
			cout << n << " no es numero par.";

		}
*/

//Con un numero ingresado por el usuario mostrar la tabla de multiplicar
/*
	int n;  

	cout << "Digite el numero que desea multiplicar: ";cin >> n;

	for (int a = 1; a <= 10; a++) {	
		cout << n << " * " << a << " = " << (n*a) << endl;
	}
	return 0; 
*/
}