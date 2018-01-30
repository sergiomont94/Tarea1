

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void mostrarArreglo(const int[], int); 
int busquedaBinaria(const int[], int, int); 
void ordenarArreglo(int[], int); 
void intercambiar(int&, int&); 
int main()
{
	int clave = 0;
	const int tamano = 15;
	int arreglo[tamano] = { 25,17,13,16,41,32,12,115,95,84,54,63,78,21,10 };
	
	ordenarArreglo(arreglo, tamano);
	cout << "Elementos del arreglo: " << endl;
	mostrarArreglo(arreglo, tamano);
	cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
	cin >> clave;
	cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arreglo, tamano, clave) << "]" << endl;
	cout << "Fin del programa" << endl;
	system("pause");
	return 0;


	
}//fin de main
void mostrarArreglo(const int arreglo[], int tamano)
{
	for (int i = 0; i < tamano; i++)
		cout << "arreglo[" << i << "]=" << arreglo[i] << endl;
}
int busquedaBinaria(const int arreglo[], int tamano, int clave)
{
	int Inicio = tamano - 1;
	int final = 0;
	int pivote;
	while (final <= Inicio)
	{
		pivote = (Inicio + final) / 2;
		if (arreglo[pivote] == clave)
			return pivote;
		else
			if (clave < arreglo[pivote])
				Inicio = pivote - 1;
			else
				final = pivote + 1;
	}
	return -1;
}
void ordenarArreglo(int arreglo[], int tamano)
{
	for (int i = 0; i< tamano - 1; i++)
		for (int j = 0; j< tamano - 1; j++)
			if (arreglo[j] > arreglo[j + 1])
				intercambiar(arreglo[j], arreglo[j + 1]);
}
void intercambiar(int &a, int &b)
{
	int tmp = b;
	b = a;
	a = tmp;
}