#include<stdio.h>

int main(){
	
	//Variveis e vetores
	int vetorA[20], vetorB[20], vetorC[20], i, j, troca;
	
	for(i=0; i< 19; i++){
		printf("VetorA(%d):", i);
		scanf("%d", &vetorA[i]);
		
		printf("\nVetorB(%d):", i);
		scanf("%d", &vetorB[i]);
		
		printf("-------------\n");
		
		//Soma dos vetor A e B
		vetorC[i] = vetorA[i] + vetorB[i];
		
	}
	
	//loop para mudar a ordem
	for(i=0; i<19; i++){
		for(j=i+1; j < 19; ++j){
			if(vetorC[i] > vetorC[j]){
				
				troca = vetorC[i];
				vetorC[i] = vetorC[j];
				vetorC[j] = troca;
				
			}
		}
	}
	
	for(i=0; i<19; i++){
		printf("%d - ", vetorC[i]);
	}
}
