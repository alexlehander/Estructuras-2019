#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
struct Fecha {
	int dia;
    char mes[30];
};
int main () {
	int i;
	struct Fecha meses [2];
	printf ("Dame tu dia y tu mes inicial:\n");
	scanf ("%d", &meses[0].dia);
	scanf ("%s", &meses[0].mes);
	printf ("Dame tu dia y tu mes final:\n");
	scanf ("%d", &meses[1].dia);
	scanf ("%s", &meses[1].mes);
	for (i=0; i<2; i++) {
	if (stricmp ("enero",meses[i].mes) == 0)      meses[i].dia = meses[i].dia+31;
	if (stricmp ("febrero",meses[i].mes) == 0)    meses[i].dia = meses[i].dia+59;
	if (stricmp ("marzo",meses[i].mes) == 0)      meses[i].dia = meses[i].dia+90;
	if (stricmp ("abril",meses[i].mes) == 0)      meses[i].dia = meses[i].dia+120;
	if (stricmp ("mayo",meses[i].mes) == 0)       meses[i].dia = meses[i].dia+151;
	if (stricmp ("junio",meses[i].mes) == 0)      meses[i].dia = meses[i].dia+181;
	if (stricmp ("julio",meses[i].mes) == 0)      meses[i].dia = meses[i].dia+211;
	if (stricmp ("agosto",meses[i].mes) == 0)     meses[i].dia = meses[i].dia+242;
	if (stricmp ("septiembre",meses[i].mes) == 0) meses[i].dia = meses[i].dia+272;
	if (stricmp ("octubre",meses[i].mes) == 0)    meses[i].dia = meses[i].dia+303;
	if (stricmp ("noviembre",meses[i].mes) == 0)  meses[i].dia = meses[i].dia+333;
	if (stricmp ("diciembre",meses[i].mes) == 0)  meses[i].dia = meses[i].dia+364;
}
printf ("Tu diferencia de dias es: %d", meses[1].dia-meses[0].dia);
}
//enero(31) febrero(28) marzo(31) abril(30) mayo(31) junio(30) julio(31) agosto(31) septiembre(30) octubre(31) noviembre(30)  diciembre(31)
