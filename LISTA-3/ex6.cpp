#include<stdio.h>
int main(){
	
	//Variáveis
	int idade, npessoas;
	float alt, somaa, somai;
	somaa  =0;
	somai  =0;
	npessoas = 0;
	
	//Inserindo informações
	printf("Informe a Idade: ");
	scanf("%d", &idade);
	printf("\nInforme a Altura: ");
	scanf("%f", &alt);
	
	//Repetição
	while(idade !=0){
		somai = somai + idade;
		somaa = somaa + alt;
		printf("\nInforme a Idade: ");
		scanf("%d", &idade);
		printf("\nInforme a Altura: ");
		scanf("%f", &alt);
	}
	
	//Medias
	printf("\nA media de altura eh : %.2f", somaa/npessoas);
	printf("\nA media de idade eh : %.2f", somai/npessoas);
	
	return 0;
	
}
