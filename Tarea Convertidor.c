#include <stdio.h>
#include <math.h>
void segundo ();
int main () {
    float decimal, temporal_entero, temporal_decimal, d;
    int binario [15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int extra [15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int exponente [8]={0,0,0,0,0,0,0,0};
    int mantisa [23]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int contador=0;
    int algo=0;
    int ciclo=0;
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    ///
    printf ("Eliga el convertidor que desea utilizar: Decimal->Binario->Estandar (0) o Estandar->Binario->Decimal (1) o Salir (2)\n");
    scanf ("%d", &ciclo);
    if (ciclo==1) {
            segundo ();
            printf("\nGracias por utilizar nuestro programa!");
            return 0;
    }
    if (ciclo==2) {
        printf("Gracias por utilizar nuestro programa!");
        return 0;
    }
    printf ("\nIntroduze un numero decimal, en un rango de -32767 a +32767:\n");
    scanf ("%f", &decimal);
    ///
    if (decimal>=-32767&&decimal<=32767) {
        if (decimal<0) {
            a=1;
            decimal=decimal*(-1);
        }
        temporal_entero = floor (decimal);
        temporal_decimal = ceil((decimal - floor(decimal))*10000);
        d = temporal_decimal;
        printf ("Solo para recordar: tu parte entera es: %.0f\nTu parte decimal es: %.4f\n", temporal_entero, temporal_decimal/10000);
        ///
        for (i=0; i<15; i++) {
            if (temporal_entero==0) break;
            if (fmod (temporal_entero, 2)==1) {
                binario [14-i]=1;
                temporal_entero=floor (temporal_entero/2);
            }
            else {
                binario [14-i]=0;
                temporal_entero=floor (temporal_entero/2);
            }
            b=b+1;
        }
        ///
        for (i=0; i<15; i++) {
            if (temporal_decimal==0) break;
            if (temporal_decimal*2>=10000) {
                temporal_decimal=temporal_decimal*2-10000;
                extra [i]=1;
            }
            else {
                temporal_decimal=temporal_decimal*2;
                extra [i]=0;
            }
            c=c+1;
            if (d==temporal_decimal) break;
        }
        ///
    }
    else {
        printf ("Mal, debes introducir otro numero:");
        return 0;
    }
    ///
    if (decimal==0) printf ("Tu numero binario es: 0");
    else {
        if (a==1) printf ("Tu numero binario es: -");
        else printf ("Tu numero binario es: ");
        for (i=15-b; i<15; i++) {
                printf ("%d ", binario [i]);
        }
        ///
        printf ("\nTu parte fraccionaria es: ");
        for (i=0; i<c; i++) {
                printf ("%d ", extra [i]);
        }
    }
    ///
    contador=126+b;
    d=b-1;
    b=0;
    printf ("\n->Informacion extra: Contador es %d<-\n", contador);
    for (i=0; i<8; i++) {
        if (contador==0) break;
        if (fmod (contador, 2)==1) {
            exponente [7-i]=1;
            contador=floor (contador/2);
        }
        else {
            exponente [7-i]=0;
            contador=floor (contador/2);
        }
        b=b+1;
    }
    ///
    contador=0;
    if (a==1) printf("Tu signo es (1 bit): -");
    else printf ("Tu signo es (1 bit): +");
    printf("\nTu exponente es (8 bits): ");
    for (i=8-b; i<8; i++) {
            printf ("%d ", exponente [i]);
    }
    for (i=15-d; i<15; i++) {
            mantisa [contador]=binario[i];
            contador=contador+1;
    }
    ///
    for (i=contador;i<23;i++) {
        mantisa[i]=extra[algo];
        algo=algo+1;
    }
    ///
    printf("\nTu mantisa es (23 bits): ");
    for (i=0;i<23;i++) {
        printf ("%d ", mantisa[i]);
    }
}
void segundo () {
    int mantisa [23]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int exponente [8]={0,0,0,0,0,0,0,0};
    float d=1;
    float algo=0;
    int contador=0;
    int a=0;
    int c=0;
    int i=0;
    printf ("Dame tu signo: + (0) o - (1)\n");
    scanf ("%d", &a);
    ///
    printf("Dame tu exponente:\n");
    for (i=0;i<8;i++) {
        scanf ("%d", &exponente[i]);
        if (exponente[i]==1) contador=contador + pow (2,7-i);
    }
    ///
    printf ("Dame tu mantisa:\n");
    for (i=0; i<23; i++) {
        scanf ("%d", &mantisa[i]);
    }
    ///
    contador=contador-126;
    int binario [15]={1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int extra   [15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b=1;
    int g=0;
    int f=0;
    ///
    printf ("\nTu parte binaria entera es:\n%d ", binario[0]);
    for (i=b; i<contador; i++) {
        binario [i]=mantisa[i-1];
        printf ("%d ", binario[i]);
        b=b+1;
        if (b==15) break;
    }
    ///
    printf ("\nTu parte binaria fraccionaria es:\n");
    for (i=b; i<23;i++) {
        extra[c]=mantisa[i-1];
        printf("%d ",extra[c]);
        c=c+1;
        if (c==15) break;
    }
    ///
    for (g=0;g<b;g++) {
        if (binario[g]==1) algo= algo + pow(2,b-(g+1));
    }
    for (f=0;f<c;f++) {
        if (extra[f]==0) d= d/2;
    }
    ///
    printf ("\nTu parte entera es: %.0f", algo);
    printf ("\nTu parte fraccionaria es: %.4f", d);
    if (a==1) printf ("\nPor lo tanto, tu numero es: - %.4f", algo+d);
    else printf ("\nPor lo tanto, tu numero es: + %.4f", algo+d);
}
