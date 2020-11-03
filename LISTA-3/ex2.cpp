// Elabore  um  programa  que  apresente  todos  os  números  divisíveis  por  3  que  sejam menores que 100.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para português
	setlocale(LC_ALL, "Portuguese");
	
	printf("Numéros Divisíveis por 3:");
	
	
	int cont;
	for(cont=3; cont<=100; cont+=3){
		printf("\n %d", cont);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
	
}
