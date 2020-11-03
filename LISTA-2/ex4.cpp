//Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a  idade  e  o  valor  da  mensalidade  do  plano  de  saúde.  A  Tabela  abaixo  apresenta  os valoresde mensalidade.
#include <stdio.h>
int main(){
	char nome[50];
	int idade;
	float mens;
	printf("Informe seu nome:");
	scanf("%s", &nome);
	printf("\n Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Nome: %s", nome);
	printf("\n Idade: %d", idade);
	if(idade <= 18){
		mens = 50.00;
		printf("\n mensalidade  do  plano  de  saude: R$ %.2f", mens);
	}else if(idade > 18 && idade <= 29){
		mens = 70.00;
		printf("\n mensalidade  do  plano  de  saude: R$ %.2f", mens);
	}else if(idade > 29 && idade<= 45){
		mens = 90.00;
		printf("\n mensalidade  do  plano  de  saude: R$ %.2f", mens);
	}else if(idade > 45 && idade<=65){
		mens = 130.00;
		printf("\n mensalidade  do  plano  de  saude: R$ %.2f", mens);
	}else if(idade > 65){
		mens = 170.00;
		printf("\n mensalidade  do  plano  de  saude: R$ %.2f", mens);
	}else{
		printf("ERRO");
	}
	
	return 0;
}
