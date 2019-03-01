#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main () {
    int a[10];
    int b;
    srand (time(NULL));
    for (int i=0; i<10; i++) {
            a[i]=rand()%10+1;
    }
    printf ("Antes de ordenar: ");
    for (int i=0; i<10; i++) {
            printf ("%d ", a[i]);
    }
    printf ("\n");
    for (int i=1; i<10; i++) {
        for (int j=i; j<10; j++) {
            if (a[j]<a[i-1]) {
                b=a[j];
                a[j]=a[i-1];
                a[i-1]=b;
            }
        }
    }
    printf("Despues de ordenar: ");
    for (int i=0; i<10; i++) {
            printf ("%d ", a[i]);
    }
}
