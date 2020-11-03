// Faça um Programa que monte os oito primeiros termos da sequência de Fibonacci.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	
	int num=55, f1=0, f2=1, f3;
	
	if(num < 0){
		printf("Numero Inválido");
	}else{
		printf("0 - 1");
	}
	
	while(f2 < num){
		f3 = f2+f1;
		printf(" - %d", f3);
		f1=f2;
		f2=f3;
	}
	
	printf("\n");
    system("PAUSE");
    return 0;
}
