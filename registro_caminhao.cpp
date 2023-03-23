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
	
	
	printf("--------CADASTRO DE CAMINHÃO-------- \n");
	printf("\n");
	printf("Informe o nome do veículo: \n");
	gets(nome);
	fflush(stdin);
	
	printf("Informe a placa do veículo: \n");
	gets(placa);
	fflush(stdin);
	
	printf("Informe o Renavam do veículo: \n");
	gets(renavam);
	fflush(stdin);
	
	printf("Informe o ano de fabricação do veículo: \n");
	gets(anoFabricacao);
	fflush(stdin);
	
	printf("Informe a quilometragem atual do veículo: \n");
	gets(quilometragem);
	fflush(stdin);
	
	
	printf("\n \n \n");
	printf("--------CAMINHÃO CADASTRADO COM SUCESSO--------	\n");
	printf("\n");
	printf("Verifique se os dados estão corretos: \n");
	printf("\n");
	printf("Nome Caminhão: %s \n", nome);
	printf("Placa do Caminhão: %s \n", placa);
	printf("Renavam do Caminhão: %s \n", renavam);
	printf("Ano de fabricação do Caminhão: %s \n", anoFabricacao);
	printf("Quilometragem do Caminhão: %s \n", quilometragem);
	printf("\n \n \n");
	
}

//--------------------------------------------------------------------------------------


int main () {
	
	setlocale(LC_ALL, "Portuguese");
		
	caminhao();
	
	system("pause");
	return 0;
}




