//Fa�a  um  programa  que  receba  tr�s  notas  de  um  aluno,  calcule  e  mostre  a  m�dia aritm�tica e a mensagem constante na tabela a seguir, considerando que a m�dia exigida � 6,0.
#include <stdio.h>
int main(){
	float n1,n2,n3, m;
	
	printf("Informe suas tres notas: ");
	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	
	m = (n1 + n2 + n3)/3;
	printf("\n Media Final: %.2f", m);
	if(m < 6){
		printf("\n reprovado");
	}else if(m >= 6){
		printf("\n Aprovado");
	}
}
