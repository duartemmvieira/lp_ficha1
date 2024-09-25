#include <stdio.h>



int main() {
    int a = 1;
    printf("tamanho do numero: %zu byte(s) \n", sizeof(a));
    printf("Tamanho do char:   %zu byte(s) \n", sizeof(char));
    printf("Tamanho do int:    %zu byte(s) \n", sizeof(int));
    printf("Tamanho do float:  %zu byte(s) \n", sizeof(float));
    printf("Tamanho do double: %zu byte(s) \n", sizeof(double));
}
