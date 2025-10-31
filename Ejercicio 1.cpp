#include <iostream>
using namespace std;
void leerArreglo(int arregloIngresado[], int size);
int sumarElementos(int arregloSumado[], int size);
int maximoElemento(int arregloMaximo[], int size);
void invertirArreglo(int arregloInvertido[], int size);
void mostrarArreglo(int arregloMostrado[], int size);
int arreglo01[10], resultado, elMayor;
int main()
{
	int arreglo02[10];
	leerArreglo(arreglo01, 10);
	resultado = sumarElementos(arreglo02, 10);
	elMayor = maximoElemento(arreglo02, 10);
	invertirArreglo(arreglo01, 10);
	cout << "La suma de los elementos del arreglo es: " << resultado << endl;
	cout << "El mayor elemento del arreglo es: " << elMayor << endl;
	return 0;
}


void leerArreglo(int arregloIngresado[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Ingrese el elemento " << i + 1 << ": ";
		cin >> arregloIngresado[i];
	}
}
int sumarElementos(int arregloSumado[], int size) {
	int suma = 0;
	for (int i = 0; i < size; i++) {
		suma += arregloSumado[i];
	}
	return suma;
}
int maximoElemento(int arregloMaximo[], int size) {
	int maximo = arregloMaximo[0];
	for (int i = 1; i < size; i++) {
		if (arregloMaximo[i] > maximo) {
			maximo = arregloMaximo[i];
		}
	}
	return maximo;
}
void invertirArreglo(int arregloInvertido[], int size) {
	for (int i = (size - 1); i >= 0; i--) {
		cout << "Elemento " << (size - i) << ": " << arregloInvertido[i] << endl;
	}
}
void mostrarArreglo(int arregloMostrado[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Elemento " << i + 1 << ": " << arregloMostrado[i] << endl;
	}
}
