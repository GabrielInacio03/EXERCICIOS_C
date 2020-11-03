#include <stdio.h>
int main(){
	printf("Exercicio 2:");
	printf("\n");
	
	float n1, n2, n3;
	float m;
	printf("Informe 3 notas: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	printf("\n");
	printf("O peso de %.f eh: 5", n1);
	printf("\n O peso de %.2f eh 3", n2);
	printf("\n O peso de %.2f eh 2", n3);
	
	m = ((5*n1)+(3*n2)+(2*n3))/(5 + 3 + 2);
	
	printf("\n A media final sera: %.2f", m);
	
	return 0;
	
}
