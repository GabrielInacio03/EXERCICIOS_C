//O programa deve fazer a raiz quadrada de um numero se ele for par
#include <stdio.h>
#include <math.h>

int main(){
	float raiz;
	int num;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &num);
	if(num%2 == 0){
		printf("\n O valor %d é par", num);
		raiz = sqrt(num);
		printf("\n Raiz quadrada %.f", raiz);
	}else{
		printf("\n nada a ser feito");
	}
	
	return 0;
}

