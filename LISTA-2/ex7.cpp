//Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
#include <stdio.h>
int main(){
	int num;
	
	printf("Informe um valor: ");
	scanf("%d", &num);
	
	if(num%3 == 0 && num%7 == 0){
		printf("O valo %d eh divisivel por 3 e 7", num);
	}else if(num%3 != 0 && num%7 != 0){
		printf("O valo %d nao eh divisivel por 3 e 7", num);
	}else if(num%3 != 0 && num%7 == 0){
		printf("O valor %d so eh divisivel por 7", num);
	}else if(num%3 == 0 && num%7 != 0){
		printf("O valor %d so eh divisivel por 3");
	}else{
		printf("Erro no sistema");
	}
	
	return 0;
	
}
