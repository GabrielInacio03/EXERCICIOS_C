#include<stdio.h>

int main(){
	//variaveis e vetores
	int vetor[19], par[19], i, cont;
	
	//loop
	for(i=1; i< 19; i++){
		printf("Informe um valor: ");
		scanf("%f", &vetor[i]);
		
		printf("\n-------------\n");
		

	}

	for(i=0; i < 19; i++){
		
		if(vetor[i] %2){
			
			par[cont] = vetor[i];
			cont++;
		}
	}
	
	printf("\nNumeros Pares:\n");
	for(i=0;  i< cont; i++){
		printf("Posicao %d = %d\n", i, par[i]);
	}
	return 0;
}

