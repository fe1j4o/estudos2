#include <stdio.h>

int main() {
    int ang1, ang2, ang3;
    printf("Digite os três ângulos do triângulo: ");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    if (ang1 + ang2 + ang3 != 180) {
        printf("Os ângulos não formam um triângulo válido.\n");
        return 1;
    }
    
    if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        printf("Triângulo Retângulo.\n");
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
        printf("Triângulo Obtusângulo.\n");
    } else {
        printf("Triângulo Acutângulo.\n");
    }

    return 0;
}
