#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct Fecha {
    char mes[30];
    int dia;
};
int main () {
	struct Fecha meses [1];
	printf ("Dame tu dia y tu mes:\n");
	scanf ("%d", &meses[0].dia);
	scanf ("%s", &meses[0].mes);
	if ((stricmp ("marzo",meses[0].mes) == 0&&meses[0].dia>=21)||stricmp ("abril",meses[0].mes) == 0||stricmp ("mayo",meses[0].mes) == 0||(stricmp ("junio",meses[0].mes) == 0&&meses[0].dia<21)) {
		printf ("Primavera");
	}
	if ((stricmp ("junio",meses[0].mes) == 0&&meses[0].dia>=21)||stricmp ("julio",meses[0].mes) == 0||stricmp ("agosto",meses[0].mes) == 0||(stricmp ("septiembre",meses[0].mes) == 0&&meses[0].dia<21)) {
		printf ("Verano");
	}
	if ((stricmp ("septiembre",meses[0].mes) == 0&&meses[0].dia>=21)||stricmp ("octubre",meses[0].mes) == 0||stricmp ("noviembre",meses[0].mes) == 0||(stricmp ("diciembre",meses[0].mes) == 0&&meses[0].dia<21)) {
		printf ("Otonio");
	}
	if ((stricmp ("diciembre",meses[0].mes) == 0&&meses[0].dia>=21)||stricmp ("enero",meses[0].mes) == 0||stricmp ("febrero",meses[0].mes) == 0||(stricmp ("marzo",meses[0].mes) == 0&&meses[0].dia<21)) {
		printf ("Invierno");
	}
}
//enero febrero marzo 21 abril mayo junio 21 julio agosto  septiembre 21 octubre noviembre  diciembre 21
