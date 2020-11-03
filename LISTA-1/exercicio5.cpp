#include <stdio.h>
#include <math.h>


int main(){
	printf("Exercicio 5: \n");
	
	float s, r, A;
	s = 3.14;
	
	printf("informe o raio de circulo: ");
	scanf("%f", &r);
	r = (pow(r,2));
	A = s*r;
	printf("A area do circulo eh: %.2f", A);
	
}
