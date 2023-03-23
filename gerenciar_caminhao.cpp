#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


//--------------------------------------------------------------------------------------
void informacoes_caminhao() {
	
	setlocale(LC_ALL, "Portuguese");
	
    printf("---- Informa��es do Caminh�o ----\n");
    printf("Nome: \n");
    printf("Placa: \n");
    printf("Renavam: \n");
    printf("Ano de Fabrica��o: \n");
    printf("Quilometragem: \n");

}

//--------------------------------------------------------------------------------------

void informacoes_manutencao() {
	
	setlocale(LC_ALL, "Portuguese");

    printf("---- Informa��es de Manuten��o ----\n");
    printf("\n");
    printf("Manuten��o agendada para dia 24/09/2023 \n");
    printf("\n");
}
//--------------------------------------------------------------------------------------

void avisos_caminhao() {
	
	setlocale(LC_ALL, "Portuguese");

    printf("---- Avisos do Caminh�o ----\n");
    printf("\n");
    printf("Sem avisos no momento! \n");
    printf("\n");
}
//--------------------------------------------------------------------------------------

int main() {
	
	setlocale(LC_ALL, "Portuguese");

    int opcao;
    do {
        
        printf("-------- GERENCIAR CAMINH�O --------\n");
        printf("\n");
        printf("1 - Ver informa��es do caminh�o \n");
        printf("\n");
        printf("2 - Ver informa��es de manuten��o \n");
        printf("\n");
        printf("3 - Avisos do Caminh�o \n");
        printf("\n");
        printf("0 - Sair \n");
        printf("\n");
        printf("Digite a op��o desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                informacoes_caminhao();
                break;
            case 2:
                informacoes_manutencao();
                break;
            case 3:
                avisos_caminhao();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
	
	system("pause");
    return 0;
}

