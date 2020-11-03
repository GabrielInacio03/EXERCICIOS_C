//Faça um programa que leia dois números e mostre o maior.
#include <stdio.h>
int main(){
	float num1, num2;
	printf("Informe dois valores: ");
	scanf("%f", &num1);
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("MAIOR VALOR FOI: %2.f", num1);
	}else if(num2 > num1){
		printf("MAIOR VALOR FOI: %2.f", num2);
	}else{
		printf("São valores iguais");
	}
	
	return 0;
}
