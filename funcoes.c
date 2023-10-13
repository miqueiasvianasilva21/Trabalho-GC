#include <stdio.h>


double kgToLbs(double kg) {
    return kg * 2.205;
}


double lbsToKg(double lbs) {
    return lbs / 2.205;
}

int main(){
    printf("%f",kgToLbs(10));
}