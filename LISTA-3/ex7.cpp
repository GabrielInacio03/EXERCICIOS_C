#include<stdio.h>

int main(){
	//Variaveis
	int alunos, ap,ex,rep;
	float n1, n2,cont, m, mclasse;
	
	cont = 0;
	mclasse=0;
	ap = 0;
	rep = 0;
	ex = 0;
	//repeticao
	for(alunos=1; alunos <=6; alunos++){
		
		printf("Aluno(%d):\n", alunos);
		printf("Nota1:");
		scanf("%f", &n1);
		printf("\nNota2:");
		scanf("%f", &n2);
		
		m = (n1+n2)/2;
		printf("\nMedia:%.2f", m);
		if(m <= 3){
			
			printf("\nReprovado");
			rep +=1;
			
		} else if(m >3 && m <=7){
			
			printf("\nExame");
			ex += 1;
			
		}else {
			
			printf("\nAprovado");
			ap += 1;
		}
		printf("\n");
		cont = cont + m;
	}
	//Media da classe
	mclasse = cont/alunos;
	
	printf("A média da Classe eh: %.2f", mclasse);
	printf("\nAprovados: %d", ap);
	printf("\nExame: %d", ex);
	printf("\nReprovados: %d", rep);
	
	return 0;
	
	
}
