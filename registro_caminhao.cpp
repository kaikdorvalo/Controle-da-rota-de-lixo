#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//--------------------------------------------------------------------------------------
void caminhao() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[31];
	char placa[8];
	char renavam[12];
	char anoFabricacao[5];
	char quilometragem[11];
	
	
	printf("--------CADASTRO DE CAMINH�O-------- \n");
	printf("\n");
	printf("Informe o nome do ve�culo: \n");
	gets(nome);
	fflush(stdin);
	
	printf("Informe a placa do ve�culo: \n");
	gets(placa);
	fflush(stdin);
	
	printf("Informe o Renavam do ve�culo: \n");
	gets(renavam);
	fflush(stdin);
	
	printf("Informe o ano de fabrica��o do ve�culo: \n");
	gets(anoFabricacao);
	fflush(stdin);
	
	printf("Informe a quilometragem atual do ve�culo: \n");
	gets(quilometragem);
	fflush(stdin);
	
	
	printf("\n \n \n");
	printf("--------CAMINH�O CADASTRADO COM SUCESSO--------	\n");
	printf("\n");
	printf("Verifique se os dados est�o corretos: \n");
	printf("\n");
	printf("Nome Caminh�o: %s \n", nome);
	printf("Placa do Caminh�o: %s \n", placa);
	printf("Renavam do Caminh�o: %s \n", renavam);
	printf("Ano de fabrica��o do Caminh�o: %s \n", anoFabricacao);
	printf("Quilometragem do Caminh�o: %s \n", quilometragem);
	printf("\n \n \n");
	
}

//--------------------------------------------------------------------------------------


int main () {
	
	setlocale(LC_ALL, "Portuguese");
		
	caminhao();
	
	system("pause");
	return 0;
}




