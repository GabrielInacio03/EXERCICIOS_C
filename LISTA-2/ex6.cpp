//Faça um programa que receba cinco números inteiros e apresente o maior e o menor.
#include <stdio.h>
int main(){
	int n1,n2,n3,n4,n5,maior,menor;
	
	printf("Informe 5 valores Inteiros: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4);
	scanf("%d", &n5);
	
	// Maior valor
	if(n1>n2 && n1>n3 && n1>n4 && n1 >n5){
		maior = n1;
		printf("\n O maior valor eh %d", maior);
	}else if(n2>n1 && n2>n3 && n2>n4 && n2 >n5){
		maior = n2;
		printf("\n O maior valor eh %d", maior);
	}else if(n3>n1 && n3>n2 && n3>n4 && n3 >n5){
		maior = n3;
		printf("\n O maior valor eh %d", maior);
	}else if(n4>n1 && n4>n2 && n4>n3 && n4 >n5){
		maior = n4;
		printf("\n O maior valor eh %d", maior);
	}else if(n5>n1 && n5>n2 && n5>n3 && n5 >n4){
		maior = n5;
		printf("\n O maior valor eh %d", maior);
	}else{
		printf("Algum dos valores são iguais");
	}
	
	//Menor Valor
	if(n1<n2 && n1<n3 && n1<n4 && n1<n5){
		menor = n1;
		printf("\n O menor valor eh %d",menor);
	}else if(n2<n1 && n2<n3 && n2<n4 && n2<n5){
		menor = n2;
		printf("\n O menor valor eh %d",menor);
	}else if(n3<n1 && n3<n2 && n3<n4 && n3<n5){
		menor = n3;
		printf("\n O menor valor eh %d",menor);
	}else if(n4<n1 && n4<n2 && n4<n3 && n4<n5){
		menor = n4;
		printf("\n O menor valor eh %d",menor);
	}else if(n5<n1 && n5<n2 && n5<n3 && n5<n4){
		menor = n5;
		printf("\n O menor valor eh %d",menor);
	}else{
		printf("Algum dos valores são iguais");
	}
	return 0;
}

