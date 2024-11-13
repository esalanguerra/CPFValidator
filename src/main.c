#include <stdio.h>
#include "cpf_validator.h"

int main() {
    char cpf[12];
    printf("Enter a CPF (numbers only): ");
    scanf("%11s", cpf);
    printf(validate_cpf(cpf) ? "Valid CPF.\n" : "Invalid CPF.\n");
    return 0;
}
