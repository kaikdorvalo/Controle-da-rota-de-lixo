#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define l 100
#define c 12
#define equipemax 5


int categoriaValida = 0;
char temp[2];
char cpf [l][c];
int vetor[11];
int x,y,existe;



struct Ajudante {
char nome[50];
char endereco[100];
char telefone[20];
char cpf[15];
};

struct Motorista {
char nome[50];
char idade[12];
char endereco[100];
char telefone[20];
char cpf[15];
char cnh[15];
char validade[15];
char categoria[5];
};



typedef struct {
    char nome[100];
    char codigo[12]; // adicionado um caractere para o '\0'
} Integrante;




typedef struct {
    char nome[100];
    int num_membros;
    Integrante integrantes[equipemax];
} EquipeLixo;




void cadastrarEquipe(EquipeLixo* equipe) {
    printf("Cadastro de equipe de coleta de lixo:\n");

    do {
        printf("Nome da equipe: ");
        fgets(equipe->nome, sizeof(equipe->nome), stdin);
        if (strlen(equipe->nome) < 3) {
            printf("O nome deve ter pelo menos 3 caracteres. Tente novamente.\n");
        }
    } while (strlen(equipe->nome) < 3);

    do {
        printf("N�mero de membros: ");
        scanf("%d", &equipe->num_membros);
        fflush(stdin); 
        if (equipe->num_membros <= 0 || equipe->num_membros > equipemax) {
            printf("O n�mero de integrantes deve ser um n�mero inteiro maior que 0 e menor ou igual a %d. Tente novamente.\n", equipemax);
        }
    } while (equipe->num_membros <= 0 || equipe->num_membros > equipemax);

    for (int i = 0; i < equipe->num_membros; i++) {
        printf("Integrante %d:\n", i + 1);
        do {
            printf("C�digo (apenas n�meros): ");
            fgets(equipe->integrantes[i].codigo, sizeof(equipe->integrantes[i].codigo), stdin);
            fflush(stdin);
            if (strlen(equipe->integrantes[i].codigo) != 11) {
                printf("O c�digo deve ter 11 d�gitos. Tente novamente.\n");
            }
        } while (strlen(equipe->integrantes[i].codigo) != 11);

        do {
            printf("Nome: ");
            fgets(equipe->integrantes[i].nome, sizeof(equipe->integrantes[i].nome), stdin);
            if (strlen(equipe->integrantes[i].nome) < 3) {
                printf("O nome deve ter pelo menos 3 caracteres. Tente novamente.\n");
            }
        } while (strlen(equipe->integrantes[i].nome) < 3);
    }
    
    printf("Cadastro realizado com sucesso!\n");
}






void cadastrarAjudante(Ajudante* ajudante) {
printf("Cadastro de ajudante de coleta de lixo:\n");

do{
     printf("Nome: ");
      gets(ajudante->nome); 
       if(strlen(ajudante->nome) < 3){
	   
        printf("O nome deve conter pelo menos 3 caracteres. Tente novamente.\n");
		}
        }while (strlen(ajudante->nome) < 3);
        
        
        
do{
     printf("Endere�o: ");
       gets(ajudante->endereco);
        if (strlen(ajudante->endereco) < 5) {
            printf("O endere�o deve ter pelo menos 5 caracteres. Tente novamente.\n");
        }
        } while (strlen(ajudante->endereco) < 5);





do{
     printf("Telefone: ");
      gets(ajudante->telefone);
        if (strlen(ajudante->telefone) != 11) {
            printf("O telefone deve ter 11 d�gitos. Tente novamente.\n");
        }
        } while (strlen(ajudante->telefone) != 11);





  
        do {
            printf("CPF  (apenas n�meros): \n");
            gets(cpf[y]);

            
            if (strlen(cpf[y]) != 11) {
                printf("O CPF deve ter 11 d�gitos. Tente novamente.\n");
            } else {
                
                for (x = 0; x < 11; x++) {
                    temp[0] = cpf[y][x];
                    vetor[x] = atoi(temp);
                }

                
                existe = 0;
                for (x = 0; x < y; x++) {
                    if (strcmp(cpf[y], cpf[x]) == 0) {
                        existe = 1;
                        break;
                    }
                }

                if (existe) {
                    printf("O CPF j� foi informado. Tente novamente.\n");
                }
            }
        } while (strlen(cpf[y]) != 11 || existe == 1);
    

printf("Cadastro realizado com sucesso!\n");
 }


void cadastrarMotorista(Motorista* motorista) {
printf("Cadastro de motorista:\n");

do{
     printf("Nome: ");
      gets(motorista->nome);
       if(strlen(motorista->nome) < 3){
	   
        printf("O nome deve conter pelo menos 3 caracteres. Tente novamente.\n");
		}
        }while (strlen(motorista->nome) < 3);


do{
     printf("Data de nascimento (Deve ser escrita exatamente assim ex: 22/11/2000):  ");
      gets(motorista->idade);
        
        if(strlen(motorista->idade)!=10){
        printf("Idade incorreta. Tente novamente.\n");	
        }
		}while(strlen(motorista->idade)!=10);
	



do{
     printf("Endere�o: ");
      gets(motorista->endereco);
       if (strlen(motorista->endereco) < 5) {
            printf("O endere�o deve ter pelo menos 5 caracteres. Tente novamente.\n");
        }
        } while (strlen(motorista->endereco) < 5);



do{
     printf("Telefone: ");
      gets(motorista->telefone);
       if (strlen(motorista->telefone) != 11) {
            printf("O telefone deve ter 11 d�gitos. Tente novamente.\n");
        }
        } while (strlen(motorista->telefone) != 11);


  
        do {
            printf("CPF  (apenas n�meros): \n");
            gets(cpf[y]);

            
            if (strlen(cpf[y]) != 11) {
                printf("O CPF deve ter 11 d�gitos. Tente novamente.\n");
            } else {
                
                for (x = 0; x < 11; x++) {
                    temp[0] = cpf[y][x];
                    vetor[x] = atoi(temp);
                }

                
                existe = 0;
                for (x = 0; x < y; x++) {
                    if (strcmp(cpf[y], cpf[x]) == 0) {
                        existe = 1;
                        break;
                    }
                }

                if (existe) {
                    printf("O CPF j� foi informado. Tente novamente.\n");
                }
            }
        } while (strlen(cpf[y]) != 11 || existe == 1);
    

 

do{
     printf("C�digo de CNH: ");
      gets(motorista->cnh);
        if (strlen(motorista->cnh) != 11) {
            printf("O C�digo de CNH deve ter 11 d�gitos. Tente novamente.\n");
        }
        } while (strlen(motorista->cnh) != 11);




do{
     printf("Validade de CNH: ");
      gets(motorista->validade);
        if(strlen(motorista->validade)!=10){
          printf("Data inexistente ou digitada errada, a data deve ser escrita exatamente assim, ex: 20/02/2023. Tente novamente.\n");	
        }
		}while(strlen(motorista->validade)!=10);
         


while (categoriaValida == 0) {
    printf("Categoria de CNH: ");
    gets(motorista->categoria);

    if (strlen(motorista->categoria) == 1 && (motorista->categoria[0] == 'A' || motorista->categoria[0] == 'B' || motorista->categoria[0] == 'C' || motorista->categoria[0] == 'D' || motorista->categoria[0] == 'E')) {
        if (motorista->categoria[0] == 'A' || motorista->categoria[0] == 'B' || motorista->categoria[0] == 'C') {
            printf("Voc� n�o possui categoria m�nima para este trabalho!\n");
            break;
        }
        else {
            printf("Categoria Aceita.\n");
            printf("Cadastro realizado com sucesso!\n");
            categoriaValida = 1;
        }
    }
    
    else {
        printf("Categoria digitada de forma inv�lida. Tente novamente!\n");
    }
}





}


int main() {
setlocale(LC_ALL,"portuguese");
EquipeLixo equipe;
Motorista motorista;
Ajudante ajudante;
int opcao;



do {
  
    printf("\nEscolha uma op��o:\n");
    printf("1. Cadastrar equipe de coleta de lixo\n");
    printf("2. Cadastrar Ajudante \n");
    printf("3. Cadastrar Motorista \n");
    printf("0. Sair\n");
    printf("> ");
    scanf("%d", &opcao);
  fflush(stdin);

    
    switch (opcao) {
        case 1:
            cadastrarEquipe(&equipe);
            break;
        case 2:
            cadastrarAjudante(&ajudante);
            break;
        case 3:
            cadastrarMotorista(&motorista);
            break;
        case 0:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
} while (opcao != 0);

return 0;
}
