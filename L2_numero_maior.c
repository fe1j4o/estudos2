#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite três números inteiros diferentes: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    printf("O maior número é: %d", maior);

    return 0;
}
