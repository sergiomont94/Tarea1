
#include <iostream>
#define DIM 100
#include <cstdio>
#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int vector[DIM], i, x;

	//se completa el vector con datos
	for (i = 0; i<DIM; i++)
		vector[i] = i + 1;

	printf("\nInsertar un numero del 1 al 100 para buscar:");
	scanf_s("%d", &x);

	
	for (i = 0; i<DIM; i++)
		if (vector[i] == x) {
			printf("%s", "\nEL numero se encuentra en la posicion ");
			printf("%d", i);
		}

	system("pause");
	return 0;
}