// Fa�a um programa que leia um n�mero inteiro e calcule o seu fatorial.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL,"Portuguese");
	
	int num, fat;
	printf("Informe um valor inteiro: ");
	scanf("%d", &num);
	
	//Calculo
	for(fat=1; num>1; num = num-1){
		fat = fat * num;
	}
	
	//Resultado
	printf("\nFatorial calculado: %d", fat);
	system("PAUSE");
	return 0;
	
}

