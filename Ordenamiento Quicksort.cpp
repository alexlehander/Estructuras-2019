#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
int main () {
    int a[30], tamano, temporal, final, variable,otro;
    int repeticiones=0;
    ///
    printf ("Dame el tamano de tu arreglo:\n");
    scanf ("%d", &tamano);
    ///
    for (int i=tamano; i<30; i++) {
            a[i]=999;
    }
    ///
    printf ("Dame los numeros de tu arreglo:\n");
    for (int i=0; i<tamano; i++) {
            scanf("%d", &a[i]);
    }
    ///
    printf ("Antes de ordenar: ");
    for (int i=0; i<tamano; i++) {
            printf ("%d ", a[i]);
    }
    ///
    int pivote=0;
    int contador=tamano-1;
    while (pivote!=contador) {
    	while (pivote<contador) {
    		if (a[pivote]>a[contador]) {
    			temporal=a[pivote];
    			a[pivote]=a[contador];
    			a[contador]=temporal;
    			temporal=pivote;
    			pivote=contador;
    			contador=temporal;
    			repeticiones++;
			}
			else contador--;
		}
		while (pivote>contador) {
			if (a[pivote]<a[contador]) {
				temporal=a[pivote];
    			a[pivote]=a[contador];
    			a[contador]=temporal;
    			temporal=pivote;
    			pivote=contador;
    			contador=temporal;
    			repeticiones++;
			}
			else contador++;
		}
	}
	///
    printf ("\nTu pivote es: %d \nQue esta en la posicion: %d", a[pivote], pivote);
    int algo=pivote;
    printf ("\nTu arreglo preliminar es: ");
    for (int i=0; i<tamano; i++) {
            printf ("%d ", a[i]);
    }
    ///
    final=algo-1;
    variable=0;
    while (final>variable) {
        pivote=variable;
        contador=final;
        otro=0;
        while (pivote!=contador) {
    	    while (pivote<contador) {
    		    if (a[pivote]>a[contador]) {
    			    temporal=a[pivote];
    			    a[pivote]=a[contador];
    			    a[contador]=temporal;
    			    temporal=pivote;
    			    pivote=contador;
    			    contador=temporal;
    			    otro++;
    			    repeticiones++;
			    }
			    else contador--;
		    }
		    while (pivote>contador) {
			    if (a[pivote]<a[contador]) {
				    temporal=a[pivote];
    			    a[pivote]=a[contador];
    			    a[contador]=temporal;
    			    temporal=pivote;
    			    pivote=contador;
    			    contador=temporal;
    			    otro++;
    			    repeticiones++;
			    }
			    else contador++;
		    }
	    }
	    if (otro==0) variable++; 
		else final--;	
	}
    ///
    final=algo+1;
    variable=tamano-1;
    while (final<variable) {
        pivote=variable;
        contador=final;
        otro=0;
        while (pivote!=contador) {
    	    while (pivote<contador) {
    		    if (a[pivote]>a[contador]) {
    			    temporal=a[pivote];
    			    a[pivote]=a[contador];
    			    a[contador]=temporal;
    			    temporal=pivote;
    			    pivote=contador;
    			    contador=temporal;
    			    otro++;
    			    repeticiones++;
			    }
			    else contador--;
		    }
		    while (pivote>contador) {
			    if (a[pivote]<a[contador]) {
				    temporal=a[pivote];
    			    a[pivote]=a[contador];
    			    a[contador]=temporal;
    			    temporal=pivote;
    			    pivote=contador;
    			    contador=temporal;
    			    otro++;
    			    repeticiones++;
			    }
			    else contador++;
		    }
	    }
	    if (otro==0) variable--; 
		else final++;    	
	}
    ///
    printf("\nDespues de ordenar: ");
    for (int i=0; i<tamano; i++) {
            printf ("%d ", a[i]);
    }
    ///
    printf ("\nRepeticiones: %d", repeticiones);
}
