#include <stdio.h>
int main () {
	int tamano,opcion,i;
	int contador=0, eterno=0;
	float c;
	printf ("\nDame el tamanio de tu cola \n");
	scanf ("%d", &tamano);
	float cola[tamano];
	for (i=0;i<tamano;i++) {
		cola[i]=0;
	}
	system("cls");
///	
	while (eterno==0) {
		printf ("\nDame la opcion: \n1-Insertar \n2-Quitar \n3-Mostrar \n4-Vacia o Llena \n5-Cima \n6-Tamanio \n7-Salir \n");
		scanf ("%d", &opcion);
		system("cls");
///
		if (opcion==1) {
    	    if (contador<tamano) {
    	    	printf ("\nIntroduze el numero a insertar \n");
    	        scanf ("%f", &c);
    		    cola[contador]=c;
    		    contador++;
		    }
		    else {
			    printf ("\nLa cola esta llena");
		    }
	    }
///
		if (opcion==2) {
			if (contador>0) {
				printf ("\nSe va a quitar el numero %.1f", cola[0]);
				cola[0]=0;
			    contador--;
				for (i=0;i<contador;i++) {
					cola[i]=cola[i+1];
					cola[i+1]=0;
				}			
			}
			else {
				printf ("\nLa cola esta vacia");
			}
		}
///		
		if (opcion==3) {
			printf ("\nTu cola es");
			if (contador>0) {
			    for (i=0;i<contador;i++) {
		            printf ("\n%.1f", cola[i]);
	            }
	        }
	        else {
	        	printf (" vacio lol!");
			}
		}
///		
        if (opcion==4) {
			if (contador==0) {
				printf ("\nTu cola esta vacia");
			}
			else if (contador==tamano) {
				printf ("\nTu cola esta llena");
			}
			else {
				printf ("\nTu cola no esta ni llena ni vacia");
			}
		}
///
        if (opcion==5) {
        	if (contador>0) {
        		printf ("\nTu elemento en la cima es %.1f", cola[0]);
			}
			else {
				printf ("\nNo tienes ningun elemento");
			}
		}
///
        if (opcion==6) {
			printf ("\nTu tamanio de la cola es %d", contador);
		}
///
        if (opcion==7) {
        	return 0;
		}
	}
///
}
