#include<stdio.h>
int main(){
	//variaveis
	int v1[10], cont=0, i, v=1;
	
	//loop
	for(i=0; i<10; ++i){
		printf("(%d)digite um valor inteiro: ", v);
		scanf("%d", &v1[i]);
		
		//condição
		if(v1[i] > 50){
			cont++;
		}
		v++;
	}
	
	//Imprimindo resultado
	if(cont == 0){
		printf("\n nenhum valor maior que 50");
		
	}else{
		printf("\n Valores maiores que 50 e suas posicoes: \n");
		for(i=0; i<10; ++i){
			if(v1[i] > 50){
				printf("Posicao %d = %d", i+1, v1[i]);
				printf("\n");
			}
		}
		
	}
	return 0;
	
}
