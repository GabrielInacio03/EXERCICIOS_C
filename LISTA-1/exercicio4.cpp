#include <stdio.h>

int main(){
	printf("Exercicio 4: \n");
	
	float a, b, area;
	printf("Informe a Altura do Triangulo:");
	scanf("%f", &a);
	printf("\n Informe a Base do Triangulo:");
	scanf("%f", &b);
	
	area = (a * b)/2;
	printf("A area do triangulo eh: %.2f", area);
}
