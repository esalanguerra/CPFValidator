#include <stdlib.h>
#include <string.h>
#include "cpf_validator.h"

int validate_cpf(const char *cpf) {
    int sum1 = 0, sum2 = 0, rem1, rem2, digits[11];

    if (strlen(cpf) != 11) return 0;

    for (int i = 0; i < 11; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') return 0;
        digits[i] = cpf[i] - '0';
    }

    for (int i = 0; i < 9; i++) sum1 += digits[i] * (10 - i);
    rem1 = sum1 % 11;
    if (digits[9] != (rem1 < 2 ? 0 : 11 - rem1)) return 0;

    for (int i = 0; i < 10; i++) sum2 += digits[i] * (11 - i);
    rem2 = sum2 % 11;
    return digits[10] == (rem2 < 2 ? 0 : 11 - rem2);
}
