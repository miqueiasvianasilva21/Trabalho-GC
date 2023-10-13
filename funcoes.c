#include <stdio.h>

double metrosParaKm(double metros) {
    return metros / 1000.0;
}

double kmParaMetros(double km) {
    return km * 1000.0;
}

int main(){
    printf("%d",metrosParaKm(10));
    printf("%d",kmParaMetros(1000));
    return 0;
}
