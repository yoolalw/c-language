#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
	int opcaoAM;
	char opcao_abrir_fechar[50];
	
	printf("Voce deseja abrir o portao manualmente ou usando seus recursos automatizados?\nPRESS 1 FOR (MANUALMENTE) | 2 FOR (AUTOMATICO): ");
	scanf("%d", &opcaoAM);
	
	
	if(opcaoAM == 1) {
	printf("Por favor, tome cuidado ao sair do carro ou nao deixar nenhum de seus pertences cair.");
	
	} else 
		if(opcaoAM == 2){
	printf("\nTabela de opcoes:\n");
	printf("\tAbrir o portao\n");
	printf("\tFechar portao\n");
	printf("Escolha uma das opcoes acima\nInsira ABRIR para Abrir o portao || Insira FECHAR para fechar o portao: ");
	scanf("%s", opcao_abrir_fechar);
	
	
	} else {
		printf("Opcao invalida, tente novamente.");
}
	
	if(strcmp(opcao_abrir_fechar, "abrir") == 0){
			system ("cls");
			printf("Portao abrindo...\n");
			Sleep(1000);
			printf("Portao aberto, por favor entre.");
		return 0;
		
	}else if(strcmp(opcao_abrir_fechar, "fechar") == 0) {
			system("cls");
			printf("Portao fechando...\n");
			Sleep(1000);
			printf("Portao fechado, verifique seus pertences.");
		return 0;
	} else {
		printf("Opcao Invalida, tente novamente.");
		return 0;
}
		
	return 0;
}
