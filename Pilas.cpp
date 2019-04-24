#include <stdio.h>

int main () {
	int tamano,opcion,i;
	int contador=0;
	int eterno=0;
	float c;
	printf ("\nDame el tamanio de tu pila \n");
	scanf ("%d", &tamano);
	float pila[tamano];
	for (i=0;i<tamano;i++) {
		pila[i]=0;
	}
	system("cls");
///	
	while (eterno==0) {
		printf ("\nDame la opcion: \n1-Insertar \n2-Quitar \n3-Mostrar \n4-Vacia o Llena \n5-Cima \n6-Tamanio \n");
		scanf ("%d", &opcion);
		system("cls");
///
		if (opcion==1) {
    	    if (contador<tamano) {
    	    	printf ("\nIntroduze el numero a insertar \n");
    	        scanf ("%f", &c);
    		    pila[contador]=c;
    		    contador++;
		    }
		    else {
			    printf ("\nLa pila esta llena");
		    }
	    }
///
		if (opcion==2) {
			if (contador>0) {
				printf ("\nSe va a quitar el numero %f", pila[contador-1]);
				pila[contador-1]=0;
			    contador--;				
			}
			else {
				printf ("\nLa pila esta vacia");
			}
		}
///		
		if (opcion==3) {
			printf ("\nTu arreglo es");
			if (contador>0) {
			    for (i=contador-1;i>-1;i--) {
		            printf ("\n%f", pila[i]);
	            }
	        }
	        else {
	        	printf (" vacio lol!");
			}
		}
///		
        if (opcion==4) {
			if (contador==0) {
				printf ("\nTu pila esta vacia");
			}
			else if (contador==tamano) {
				printf ("\nTu pila esta llena");
			}
			else {
				printf ("\nTu pila no esta ni llena ni vacia");
			}
		}
///
        if (opcion==5) {
        	if (contador>0) {
        		printf ("\nTu elemento en la cima es %f", pila[contador-1]);
			}
			else {
				printf ("\nNo tienes ningun elemento");
			}
		}
///
        if (opcion==6) {
			printf ("\nTu tamanio de la pila es %d", contador);
		}
	}
///
}
