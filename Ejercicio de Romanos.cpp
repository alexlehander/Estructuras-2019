#include <stdio.h>
#include <conio.h>
void calcular (int &);
int main () {
    int decimal = 0;
    calcular (decimal);
    printf("Tu numero decimal es: %d", decimal);
}
inline void calcular (int &decimal) {
    char romano [10] = {0,0,0,0,0,0,0,0,0,0};
    int extra [11] = {0,0,0,0,0,0,0,0,0,0,0};
    printf("Dame el numero romano:\n");
    scanf("%s", &romano);
    printf ("Tu numero romano es: %s\n", romano);
    for (int i=0; i<10; i++) {
        if (romano[i]=='M') extra [i]=1000;
        else if (romano[i]=='D') extra [i]=500;
        else if (romano[i]=='C') extra [i]=100;
        else if (romano[i]=='L') extra [i]=50;
        else if (romano[i]=='X') extra [i]=10;
        else if (romano[i]=='V') extra [i]=5;
        else if (romano[i]=='I') extra [i]=1;
        else if (romano[i]==0) break;
    }
    for (int i=0; i<10; i++) {
        if (extra [i]>=extra[i+1]) {
            decimal=decimal+extra[i];
        }
        else {
            decimal=decimal+(extra[i]-extra[i+1])*-1;
            i=i+1;
        }
    }
}
