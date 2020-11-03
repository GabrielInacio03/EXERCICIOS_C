#include<stdio.h>

int main(){
	//Variáveis
	int vetor[9],num, i;
	
	//loop
	for(i=0; i<9; ++i){
		printf("Valor: ");
		scanf("%d", &num);
		
		vetor[i] = num;
	}
	
	for(i=0; i<9; ++i){
		
		printf("Posicao %d = %d , ", i, vetor[i]);
	}
	
	return 0;
}
