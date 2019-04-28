#include <stdio.h>
int main () {
	int tamano,opcion,i;
	int contador2=0, eterno=0;
	printf ("\nDame el tamanio de su numero \n");
	scanf ("%d", &tamano);
	int numero[tamano], pila[tamano], cola[tamano];
	int contador1=tamano-1;
	system("cls");
	while (eterno==0) {
		printf ("\nDame la opcion: \n1-Anotar el numero \n2-Comparar si es Palindrome \n3-Salir \n");
		scanf ("%d", &opcion);
		system("cls");
		if (opcion==1) {
    	    printf ("\nIntroduzca el numero deseado \n");
    	    for (i=0;i<tamano;i++) {
    	    	scanf ("%d", &numero[i]);
    	    	pila[contador1]=numero[i];
    		    contador1--;
    		    cola[contador2]=numero[i];
    		    contador2++;
			}
	    }
		if (opcion==2) {
			for (i=0;i<contador2;i++) {
		        if (cola[i]==pila[i]) tamano--;
		        printf ("\n%d %d", cola[i], pila[i]);
	        }
	        if (tamano==0) printf ("\nEs Palindrome");
	        else printf ("\nNo lo es");
		}
        if (opcion==3) {
        	return 0;
		}
	}
}
