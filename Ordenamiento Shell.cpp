#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main () {
    int n, m, x, cont, a[30];
    int recorrido=1;
    int salto=1;
    int repeticiones=0;
    printf ("Dame el tamano de tu arreglo:\n");
    scanf ("%d", &n);
    x=n;
    for (int i=x; i<30; i++) {
            a[i]=999;
    }
    printf ("Dame los numeros de tu arreglo:\n");
    for (int i=0; i<x; i++) {
            scanf ("%d", &a[i]);
    }
    printf ("Antes de ordenar: ");
    for (int i=0; i<x; i++) {
            printf ("%d ", a[i]);
    }
    n=n/2;
    while (n>0) {
        salto=n;
        cont=0;
        for (int i=0; i<x-n; i++) {
            if (a[i]>a[i+n]) {
                m=a[i];
                a[i]=a[i+n];
                a[i+n]=m;
                cont=cont+1;
                repeticiones++;
            }
        }
        if (cont==0) {
            n = n/2;
        }
        printf ("\nRecorrido: %d     Salto: %d     Cadena: ", recorrido, salto);
        for (int i=0; i<x; i++) {
            printf ("%d ", a[i]);
        }
        recorrido++;
    }
    printf ("\nRepeticiones: %d", repeticiones);
}
