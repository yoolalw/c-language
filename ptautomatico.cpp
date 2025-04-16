/*	Sistema de automatizaçao de portoes
	Teste;
	Proprietario : Lara Kemily
	Equipe:
	Versao: 1.0
	
	Finalizado: 08/04/2025
	*/

#include <stdio.h>
#include <windows.h>


int main(void){
    int opcaoAM;
    int opcaoAF;
 	float distancia;
	float distanciaMinima = 3.0; //centimetros de distancia entre o portao e a parede, de acordo com o tamanho do veículo.

    printf("Voce deseja abrir o portao manualmente ou usando seus recursos automatizados?\nPRESS 1 FOR (MANUALMENTE) | 2 FOR (AUTOMATICO): ");
    scanf("%d", &opcaoAM);


    if(opcaoAM == 1) {
        printf("Sistema automatico desligado.");
		} else
            if(opcaoAM == 2){
    do{
	
                printf("\nTabela de opcoes:\n");
                printf("\t(1) [Abrir o portao]\n");
                printf("\t(2) [Fechar portao]\n");
                printf("Escolha uma das opcoes acima\nInsira (1) para Abrir o portao || Insira (2) para fechar o portao: ");
                scanf("%d", &opcaoAF);

////////////////////////////////// AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

			if(opcaoAF == 1){
	        system ("cls");
	        printf("Portao abrindo...\n");
			Sleep(3000);
	        printf("Portao aberto, por favor entre.");

			} else if(opcaoAF == 2) {
do{


	        	printf("Calculando a distancia do veiculo...\nInsira a distancia do veiculo: ");
	        	scanf("%f", &distancia);	
				if (distancia<=distanciaMinima){
					printf("Sensor verificou proximidade alem do limite, portao permanece aberto.");
				} else {
					printf("Entrada feita com sucesso, retorne ao menu para fechar o portao.");
				} 
				}while (distancia <= distanciaMinima);
				
			system("cls");
	        printf("Portao fechando...\n");
	        Sleep(1000);
	        printf("Portao fechado, verifique seus pertences.");
        
					
			} else {
				printf("Opcao invalida");
			}
		}while(opcaoAF!=2&&opcaoAF!=2);
	} else {
		printf("Opcao invalida, tente novamente.");
	}

        return 0;
}
