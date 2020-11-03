#include<stdio.h>

int main(){
	//Variaveis
	int i,x, troca, vetorA[5], vetorB[5], vetorC[10];
	
	//loop
	for(i=0; i<5; i++){
		
		printf("VetorA(%d):", i);
		scanf("%d", &vetorA[i]);
		
		
		printf("\nVetorB(%d):", i);
		scanf("%d", &vetorB[i]);
		
		printf("\n --------- \n");
		
		
	}
	
	//Loop para ordenar
	for(i=0; i<5; i++){
		
		//vetorA
		for(x=i+1; x < 5; ++x){
			if(vetorA[i] > vetorA[x]){
				
				troca = vetorA[i];
				vetorA[i] = vetorA[x];
				vetorA[x] = troca;
				
			}
		}
		
		//vetorB
		for(x=i+1; x < 5; ++x){
			if(vetorB[i] > vetorB[x]){
				
				troca = vetorB[i];
				vetorB[i] = vetorB[x];
				vetorB[x] = troca;
				
			}
		}
		
		//vetorC
		for(x=i+1; x < 5; ++x){
			if(vetorC[i] > vetorC[x]){
				
				troca = vetorC[i];
				vetorC[i] = vetorC[x];
				vetorC[x] = troca;
				
			}
		}
		
	}
	
	
	//vetorA
	printf("VetorA:");
	for(i=0; i<5; i++){
		printf("%d - ", vetorA[i]);
	}
	//vetorB
	printf("\nVetorB:");
	for(i=0; i<5; i++){
		printf("%d - ", vetorB[i]);
	}
	//vetorC
	printf("\nVetorC:");
	for(i=0; i<5; i++){
		
		printf("%d - ", vetorC[i]);
	}
	
}
