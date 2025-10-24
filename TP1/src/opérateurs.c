#include <stdio.h>
#include <stdbool.h>

int main() {
int a = 16;
int b = 3; 
int ad, so, mu, di, mo;
bool egal, sup; 

ad = a + b;
so = b - a;
mu = a * b;
di = a / b;
mo = a % b;

if(a == b) {
    egal = true;
}else{
    egal = false;
}

if(a > b) {
    sup = true;
}else{
    sup = false;
}

    printf("Addition = %d\n", ad);
    printf("Soustraction = %d\n", so);
    printf("Multiplication = %d\n", mu);
    printf("Division = %d\n", di);
    printf("Modulo = %d\n", mo);
    printf("Egalité = %d\n", egal);
    printf("Supériorité = %d\n", sup);
}