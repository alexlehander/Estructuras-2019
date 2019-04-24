#include <stdio.h>

int main () {
	int a, i;
	printf ("Dame el tamanio de tu arreglo de numeros enteros: ");
	scanf ("%d", &a);
	int b[a], f[a], d=a-1;
	printf ("Dame el valor de estos numeros:\n");
	for (i=0; i<a; i++) {
		printf ("El numero %d: ", i+1);
		scanf("%d", &b[i]);
	}
	printf ("\nTu arreglo antes de ordenar es:");
	for (i=0; i<a; i++) {
		printf(" %d ", b[i]);
	}
	for (i=0; i<a; i++) {
		f[d]=b[i];
		d--;
	}
	printf ("\nTu arreglo invertido es:");
	for (i=0; i<a; i++) {
		printf(" %d ", f[i]);
	}
}
