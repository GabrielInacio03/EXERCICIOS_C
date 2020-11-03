#include<stdio.h>
int main(){
	
	//variaveis
	int v1[10], v2[10], v3[20], x=0, y=0,i;
	
	
	//loop
	for(i=0; i<10; ++i){
		printf("(%d)Digite um valor: ", i);
		scanf("%d", &v1[i]);
		
		//condição
		if(v1[i] % 2 == 0){
			
			v3[x] = v1[i];
			x++;
		}else {
			v2[y] = v1[i];
			y++;
		}
	}
	
	//imprimindo valores
	printf("\n----------\n");
	printf("Numeros Pares: ");
	for(i=0; i < x; ++i){
		printf(" %d - ", v3[i]);
	}
	printf("\nNumeros Impares: ");
	for(i=0; i < y; ++i){
		printf(" %d - ", v2[i]);
	}
	
	printf("\n");
	return 0;
}
