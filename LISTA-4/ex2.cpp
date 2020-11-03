#include<stdio.h>

int main(){
	
	//variaveis
	int vetor[30], i=0, cont=0;
	
	//loop
	while(i < 30){
		i++;
		printf("Valor: ");
		scanf("%d", &vetor[i]);
		
	}
	printf("\ntroca de ordem");
	for(i=30; i> 0; i--){
		printf(" %d - ", vetor[i]);
	}
	
	return 0;
}
