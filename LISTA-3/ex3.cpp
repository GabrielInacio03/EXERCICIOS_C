// Construa um programa que receba um n�mero inteiro maior que 1 e verifique se ele � primo.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL,"Portuguese");
	
	int num, quant,i;
	printf("Informe um valor inteiro maior que 1:");
	scanf("%d", &num);
	quant = 0;
	//Condi��o
	for(i=1;i<=num;i++){
		if(num%i == 0){
			quant++;
		}
	}
	if(quant == 2){
		printf("\nO numero � primo");
	}else{
		printf("\n N�o � primo");
	}

	printf("\n");
	system("PAUSE");
	return 0;
}
