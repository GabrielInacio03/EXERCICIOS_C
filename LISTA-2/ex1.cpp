//Fa�a um programa que leia umn�mero einforme se ele � divis�vel por 5.
#include <stdio.h>
int main(){
	int num;
	printf("Informe um valor: ");
	scanf("%d", &num);
	if(num%5 == 0){
		printf("O valor %d eh divisivel por 5", num);
	}else{
		printf("O valor %d n�o eh divisivel por 5", num);
	}
	
	return 0;
}
