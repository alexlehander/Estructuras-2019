#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int main () {

    int a[30], b, n, i=0, j=0;

    int repeticiones=0;

    printf ("Dame el tamano de tu arreglo:\n");

    scanf ("%d", &n);

    for (i=n; i<30; i++) {

            a[i]=999;

    }

    printf ("Dame los numeros de tu arreglo:\n");

    for (i=0; i<n; i++) {

            scanf("%d", &a[i]);

    }

    printf ("Antes de ordenar: ");

    for (i=0; i<n; i++) {

            printf ("%d ", a[i]);

    }

    printf ("\n");

    for (i=1; i<n; i++) {

        for (j=i; j<n; j++) {

            if (a[j]<a[i-1]) {

                b=a[j];

                a[j]=a[i-1];

                a[i-1]=b;

                repeticiones++;

            }

        }

    }

    printf("Despues de ordenar: ");

    for (i=0; i<n; i++) {

            printf ("%d ", a[i]);

    }

    printf ("\nRepeticiones: %d", repeticiones);

}
