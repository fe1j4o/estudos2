#include <stdio.h>

int main() {
    int L1, L2, L3;
    printf("digite a medida do primeiro lado: ");
    scanf("%d", &L1);
    printf("digite a medida do segundo lado: ");
    scanf("%d", &L2);
    printf("digite a medida do terceiro lado: ");
    scanf("%d", &L3);
    if(L1==L2 && L2==L3){
    		printf("triangulo equilátero");
    }
    else if(L1==L3 || L1==L2){
    	printf("triangulo isócele");
    }
    else{
    	printf("triangulo escaleno");
    }

    return 0;
}
