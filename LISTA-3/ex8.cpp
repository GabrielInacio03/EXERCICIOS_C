#include<stdio.h>

int main(){
	//variaveis
	int nota, id, cliente;
	float cont,midade, sats, ins;
	
	cont = 0;
	ins = 0;
	sats = 0;
	midade = 0;
	cliente = 0;
	while(nota != 0){
		cliente++;
		printf("Cliente(%d): \n", cliente);
		printf("Sua Idade: ");
		scanf("%d", &id);
		printf("\nQual sua nota para o produto \n");
		printf("1-Satisfatorio; 2-Indiferente; 3-Insatisfatorio:");
		scanf("%d", &nota);
		
		if(nota == 1){
			sats += 1;
		}else if(nota == 3){
			ins +=1;
		}
		
		cont = cont + id;
	}
	
	// media
	midade = cont/sats;
	
	//Final
	printf("\nClientes satisfaorios: %.2f", sats);
	printf("\nClientes Insatisfatorios: %.2f", ins);
	printf("A media de idade dos clientes que opinaram como satisfatorio: %.2f", midade);
	
	return 0;
}
