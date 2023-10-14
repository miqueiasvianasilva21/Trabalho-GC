#include <stdio.h>
#include "funcoes.h"
#include "funcoes.c"

void testMetrosParaKm() {
    double resultado = metrosParaKm(1000.0);
    if (resultado == 1.0) {
        printf("Teste de metrosParaKm(1000.0) passou.\n");
    } else {
        printf("Teste de metrosParaKm(1000.0) falhou. Resultado: %lf\n", resultado);
    }

    resultado = metrosParaKm(2000.0);
    if (resultado == 2.0) {
        printf("Teste de metrosParaKm(2000.0) passou.\n");
    } else {
        printf("Teste de metrosParaKm(2000.0) falhou. Resultado: %lf\n", resultado);
    }

    resultado = metrosParaKm(1500.0);
    if (resultado == 1.5) {
        printf("Teste de metrosParaKm(1500.0) passou.\n");
    } else {
        printf("Teste de metrosParaKm(1500.0) falhou. Resultado: %lf\n", resultado);
    }
}

void testKmParaMetros() {
    double resultado = kmParaMetros(2.0);
    if (resultado == 2000.0) {
        printf("Teste de kmParaMetros(2.0) passou.\n");
    } else {
        printf("Teste de kmParaMetros(2.0) falhou. Resultado: %lf\n", resultado);
    }

    resultado = kmParaMetros(1.0);
    if (resultado == 1000.0) {
        printf("Teste de kmParaMetros(1.0) passou.\n");
    } else {
        printf("Teste de kmParaMetros(1.0) falhou. Resultado: %lf\n", resultado);
    }

    resultado = kmParaMetros(0.5);
    if (resultado == 500.0) {
        printf("Teste de kmParaMetros(0.5) passou.\n");
    } else {
        printf("Teste de kmParaMetros(0.5) falhou. Resultado: %lf\n", resultado);
    }
}

int main() {
    testMetrosParaKm();
    testKmParaMetros();

    return 0;
}
