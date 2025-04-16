// 	Sistema de reconhecimento de smart tag, projeto teste.
/*	Proprietario: Lara Kemily
	Versao: 1.0
	Equipe:
	Data de finalizacao: 09/04/2025
*/

#include <stdio.h>
#include <windows.h>
#include <string.h>

int main(void){
	int smartTag;
	float distancia;
	float distanciaMinima = 5.0;
	int opcao;
	
	
	printf("\nQuando estiver com sua smart tag em maos, certifique-se que:\n1 - Esta conectada com o aplicativo.\n2 - O sistema automatico do seu portao tenha acesso a bluetooth.\nEsta tudo pronto para sua primeira viagem?: \n(1) = SIM || (2) = NAO: ");
	scanf("%d", &opcao);
		if(opcao == 1){
	
		printf("\n! Lembrando que, este e um prototipo do sistema, tudo aqui e apenas uma simulacao.\nInsira a distancia do portao ate voce: ");
		scanf("%f", &distancia);
		
			if(distancia<=distanciaMinima){
				system ("cls");
				printf("O portao esta se abrindo...\n");
				Sleep(3000);
				
				system ("cls");
				printf("O portao esta aberto.\nEle ira se fechar em: 30 segundos.\n");
				Sleep (3000);
				
				system ("cls");		
				printf("O portao esta se fechando...\n");
				Sleep (3000);
				printf("O portao se fechou, verifique seus pertences.\n");
		} else {
			printf("Nenhum movimento por enquanto.");
		}
} else if (opcao==2){
	printf("Tutorial de como usar sua smart tag:\n1 . Baixe o aplicativo no seu celular\n2 . Aperte o botao que esta em sua Smart Tag para emparelhar com o seu celular (Bluetooth necessario).\n3 . Coloque sua smart tag em algum ponto do seu carro e, todas as vezes que esse ponto estiver a 5 metros de distancia do portao, o portao ira se abrir.");
	
	
}
else if((opcao!=1) || (opcao!=2)){
	printf("Opcao incorreta.");
}
	return 0;
}
