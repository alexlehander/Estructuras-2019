#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void crearmatriz (int a[][99], int b[][99], int &c, int &d) {
    printf ("Dame la cantidad de renglones y columnas de tu matriz:\n");
    scanf("%d", &c);
    scanf("%d", &d);
    for (int i=0;i<c;i++) {
        for (int j=0;j<d;j++) {
            a[i][j]=rand()%10;
        }
    }
}
void invertirmatriz (int a[][99], int b[][99], int &c, int &d) {
    for (int i=0;i<d;i++) {
        for (int j=0;j<c;j++) {
            b[i][j]=a[j][i];
        }
    }
}
void mayormenor (int a[][99], int b[][99], int &op, int &os, int &f, int &g, int &c, int &d, int po[][2], int so[][2]) {
    for (int i=0;i<c;i++) {
        for (int j=0;j<d;j++) {
            if (a[i][j]>op) {
                op=a[i][j];
                po[0][1]=i;
                po[1][0]=j;
                f=0;
            }
            if (a[i][j]==op) {
                f=f+1;
            }
            if (a[i][j]<os) {
                os=a[i][j];
                so[0][1]=i;
                so[1][0]=j;
                g=0;
            }
            if (a[i][j]==os) {
                g=g+1;
            }
        }
    }
}
int main () {
    srand (time(NULL));
    int c,d;///variables de renglon y columna
    int op=0;///numero mayor
    int os=100;///numero menor
    int f=0;///repeticiones del numero mayor
    int g=0;///repeticiones del numero menor
    int po[2][2];///arreglo de posicion del mayor
    int so[2][2];///arreglo de posicion del menor
    int a[99][99];///arreglo matriz original
    int b[99][99];///arreglo matriz invertida
    ///
    crearmatriz (a, b, c, d);
    ///Imprimir
    printf("\nLa matriz original:\n");
    for (int i=0;i<c;i++) {
        printf(" \n ");
        for (int j=0;j<d;j++) {
            printf (" %d ",a[i][j]);
        }
    }
    ///
    invertirmatriz (a, b, c, d);
    ///Imprimir
    printf("\nLa matriz invertida:\n");
    for (int i=0;i<d;i++) {
        printf(" \n ");
        for (int j=0;j<c;j++) {
            printf (" %d ",b[i][j]);
        }
    }
    ///
    mayormenor (a, b, op, os, f, g, c, d, po, so);
    ///
    printf ("\n\nEl numero mas grande es: %d\nSu posicion es: %d,%d\nSe repite %d veces", op, po [0][1], po [1][0], f);
    printf ("\nEl numero mas pequenno es: %d\nSu posicion es: %d,%d\nSe repite %d veces", os, so [0][1], so [1][0], g);
}
