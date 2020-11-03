#include <stdio.h>
#include <math.h>


int main(){
	float a, r;

	printf("Digite o valor do raio: ");
	scanf ("%f", &r);

	r= pow (r,2);
	a = 3.14 * r;

	printf("A area do circulo: %.2f \n", a);


	return 0;
}
