#include <stdio.h>

int main(){
	printf("Exercicio 3: \n");
	
	float n1, n2, n3,n4;
	float m;
	printf("Informe 4 notas: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	m = (n1 + n2 + n3 + n4) /4;
	
	printf("A media final eh:%.2f", m);
	
	return 0;
	
}
