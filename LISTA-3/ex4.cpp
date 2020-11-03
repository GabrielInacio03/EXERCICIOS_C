//Escreva  um  programa  que  exiba  na  tela  a  tabuada  de  um  número  quedeverá  ser informado pelo usuário (poderáser usada qualquer estrutura de repetição). 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL,"Portuguese");
	
	int num, cont, r;
	
	printf("Informe um valor para a tabuada: ");
	scanf("%d", &num);
	for(cont=0; cont<=10; cont++){
		r = num * cont;
		printf("\n %d x %d = %d", num, cont, r);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
}
