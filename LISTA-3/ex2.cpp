// Elabore  um  programa  que  apresente  todos  os  n�meros  divis�veis  por  3  que  sejam menores que 100.
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //Idiomas

int main(){
	//A linha abaixo configura o idioma para portugu�s
	setlocale(LC_ALL, "Portuguese");
	
	printf("Num�ros Divis�veis por 3:");
	
	
	int cont;
	for(cont=3; cont<=100; cont+=3){
		printf("\n %d", cont);
	}
	
	printf("\n");
	system("PAUSE");
	return 0;
	
}
