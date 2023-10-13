#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

// Inclua as declarações das funções a serem testadas
#include "funcoes.c"

// Função de inicialização do teste
int test_kgToLbs(void **state) {
    assert_float_equal(kgToLbs(10), 22.05000, 0.001);  // Tolerância de 0.001
    return 0;
}

int test_lbsToKg(void **state) {
    assert_float_equal(lbsToKg(22), 9.97734, 0.001);  // Tolerância de 0.001
    return 0;
}

int main() {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_kgToLbs),
        cmocka_unit_test(test_lbsToKg),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
