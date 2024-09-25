#include <stdio.h>

int main() {
    // variaveis onde armazenam valores de input
    float pf, t, pm, pv;

    // rececao de dados 
    printf("Preco de fabrico: ");
    scanf_s("%f", &pf);

    printf("Taxa (%%): ");
    scanf_s("%f", &t);

    printf("Margem Fornecedor (%%): ");
    scanf_s("%f", &pm);

    // calculo preco de venda
    pv = pf * (1 + t / 100 + pm / 100);

    // mostra resultado
    printf("Preco de venda: %.6f\n", pv);

    return 0;
}
