#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>


//--------------------------------------------------------------------------------------
void informacoes_caminhao() {
	
	setlocale(LC_ALL, "Portuguese");
	
    printf("---- Informações do Caminhão ----\n");
    printf("Nome: \n");
    printf("Placa: \n");
    printf("Renavam: \n");
    printf("Ano de Fabricação: \n");
    printf("Quilometragem: \n");

}

//--------------------------------------------------------------------------------------

void informacoes_manutencao() {
	
	setlocale(LC_ALL, "Portuguese");

    printf("---- Informações de Manutenção ----\n");
    printf("\n");
    printf("Manutenção agendada para dia 24/09/2023 \n");
    printf("\n");
}
//--------------------------------------------------------------------------------------

void avisos_caminhao() {
	
	setlocale(LC_ALL, "Portuguese");

    printf("---- Avisos do Caminhão ----\n");
    printf("\n");
    printf("Sem avisos no momento! \n");
    printf("\n");
}
//--------------------------------------------------------------------------------------

int main() {
	
	setlocale(LC_ALL, "Portuguese");

    int opcao;
    do {
        
        printf("-------- GERENCIAR CAMINHÃO --------\n");
        printf("\n");
        printf("1 - Ver informações do caminhão \n");
        printf("\n");
        printf("2 - Ver informações de manutenção \n");
        printf("\n");
        printf("3 - Avisos do Caminhão \n");
        printf("\n");
        printf("0 - Sair \n");
        printf("\n");
        printf("Digite a opção desejada: ");
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
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
	
	system("pause");
    return 0;
}

