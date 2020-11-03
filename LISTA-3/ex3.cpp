// Construa um programa que receba um número inteiro maior que 1 e verifique se ele é primo.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	
	int num, quant,i;
	printf("Informe um valor inteiro maior que 1:");
	scanf("%d", &num);
	quant = 0;
	//Condição
	for(i=1;i<=num;i++){
		if(num%i == 0){
			quant++;
		}
	}
	if(quant == 2){
		printf("\nO numero é primo");
	}else{
		printf("\n Não é primo");
	}

	printf("\n");
	system("PAUSE");
	return 0;
}
