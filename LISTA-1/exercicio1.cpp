#include <stdio.h>

int main(){
	int n,ant,suc;
	
	printf("Exercicio 1:");
	printf("\n");
	
	printf("Escreva um valor inteiro:");
	scanf("%d", &n);
	ant = n - 1;
	suc = n + 1;
	printf("O antecessor de %d �:%d", n, ant);
	printf("\n");
	printf("O Sucessor de %d �: %d", n, suc);
	
	
	return 0;
}
