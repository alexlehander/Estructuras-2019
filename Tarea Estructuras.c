#include <string.h>
#include <stdio.h>
struct Libreria {
    char titulo[30];
    char autor[30];
    int anio;
};
int main() {
    int a=1;
    int b=1;
    int i=0;
    struct Libreria libros[10];
    int cont = 0;
    while (a>=1||a<3) {
        printf("Total de libros: %d\n",cont);
        printf ("1. Agregar \n2. Imprimir \n3. Salir \n");
        scanf ("%d", &a);
        if (a==1) {
            while (b==1) {
                printf("Titulo: ");
                scanf("%s",&libros[cont].titulo);
                printf("Autor: ");
                scanf("%s",&libros[cont].autor);
                printf("Anioo de publicacion: ");
                scanf("%d",&libros[cont].anio);
                cont++;
                if (cont==10) {
                    printf ("Lo lamento, ya registro muchos libros, no se puede registrar mas");
                    b=0;
                    break;
                }
                printf("Deseas registrar mas? (S=1/N=0) \n");
                scanf("%d",&b);
                if (b==0) {
                    b=1;
                    break;
                }
            }
        }
        else if (a==2) {
            printf ("Tus libros son: \n");
            for (i=0; i<cont; i++) {
                printf("Libro numero: %d \n",i+1);
                printf("Titulo: %s \n",libros[i].titulo);
                printf("Autor: %s \n",libros[i].autor);
                printf("Anioo de publicacion: %d \n",libros[i].anio);
            }
        }
        else if (a==3) {
            return 0;
        }
    }
}
