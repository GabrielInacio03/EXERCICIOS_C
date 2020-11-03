#include<stdio.h>

int main(){
	
	//variaveis
	float vetor[10], num;
	int i = 0, cont=0;
	while(i<10){
		i++;
		printf("Nota %d :", i);
		scanf("%f", &vetor[i]);
		
		num = vetor[i];
		
		//condição
		if(num > 7){
			cont++;
					
		}
	}
	printf("Sao %d numeros mais altas que 7: \n", cont);
	
	
	return 0;
}
