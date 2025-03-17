#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793

int main(){
	float comprimento, area;
	int lados;
	printf("escolha qual forma voce deseja saber a area digitando o seu numero de lados (3, 4 ou 5): ");
	scanf("%d", &lados);
    printf("digite o comprimento dos lados da forma: ");
	scanf("%f", &comprimento);
	if(lados==3){
        area = (comprimento * comprimento *sqrt(3)) / 4;
	    printf("a area do triangulo é %f", area);
	}
	else if(lados==4){
		area = (comprimento * comprimento);
		printf("a area do quadrado é %f", area);
	}
	else if(lados==5){
		area = (5 * comprimento * comprimento) / (4 * tan(PI / 5));
		printf("a area do pentagono é %f", area);
	}
	else if(lados<3){
		printf("nao é um poligono");
	}
	else{
		printf("poligono nao identificado");
	}
	return 0;
}
