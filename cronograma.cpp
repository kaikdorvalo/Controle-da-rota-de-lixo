#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char aperteEnter;
char diaSemana[20];
int codColeta;
int tamColeta;
char resposta, respostaL[10];
int codRemover;

 
typedef struct {
	int idEquipe;
	char nome[20];
	char integrantes[3][20];
	char caminhao[9];
} Equipe;

int horaInicio=7;

typedef struct {
	int idRota;
	char nome[20];
	char duracao;
} Rota;

typedef struct {
	int ids[20];
	int rotas[20];
	int equipes[20];
} RotasAtribuidas;

typedef struct {
	char diaSemana[10][20];
	int idRotaAtribuida[20];
} Cronograma;

int ultimoIDRotaAtribuida=0;

int criaIDRotaAtribuida() {
	int temp=ultimoIDRotaAtribuida+1;
	ultimoIDRotaAtribuida++;
	return temp;
}

int ultimoCronogramaAtribuido=0;

int criaIDCronograma() {
	int temp=ultimoCronogramaAtribuido+1;
	ultimoCronogramaAtribuido++;
	return temp;
}

Equipe equipes[20];
Rota rotas[20];
RotasAtribuidas rotasAtribuidas;
Cronograma cronograma;

int atribuirRota(int r, int e) {
	int idTemp = criaIDRotaAtribuida();
	rotasAtribuidas.ids[idTemp]=idTemp;
	rotasAtribuidas.rotas[idTemp]=r;
	rotasAtribuidas.equipes[idTemp]=e;
}


int main() {
	setlocale(LC_ALL,"portuguese");
	
	// Alimentando o vetor de equipes (simulação)
	equipes[0].idEquipe=2435;
	strcpy(equipes[0].nome,"Equipe 1");
	strcpy(equipes[0].integrantes[0],"Emanuel Gomes");
	strcpy(equipes[0].integrantes[1],"Cleiton Alpes");
	strcpy(equipes[0].integrantes[2],"Emilia Gaspar");
	strcpy(equipes[0].caminhao,"DIT-6D37");
	
	equipes[1].idEquipe=5635;
	strcpy(equipes[1].nome,"Equipe 2");
	strcpy(equipes[1].integrantes[0],"Vitor Jonson");
	strcpy(equipes[1].integrantes[1],"Maria Cardoso");
	strcpy(equipes[1].integrantes[2],"Fernando Marins");
	strcpy(equipes[1].caminhao,"TIT-9S26");
	
	//Alimentando o vetor de rotas (simulação)
	rotas[0].idRota=4523;
	strcpy(rotas[0].nome,"Zona 7");
	rotas[0].duracao=3;
	
	rotas[1].idRota=1453;
	strcpy(rotas[1].nome,"Zona 8");
	rotas[1].duracao=2;
	
	// atribuindo rotas à equipe (simulação)
	atribuirRota(4523,2435); //id 1
	atribuirRota(1453,5635); // id 1
	
	// criando cronograma
	do {
		int escolhaFeita;
		printf("      Criação de cronograma semanal        \n\n");
		printf("-------------------------------------------\n\n");
		printf("          Digite uma das opções:           \n\n");
		printf("              1- Adicionar                  \n");
		printf("              2- Remover                   \n\n");
		printf("-------------------------------------------\n");
		printf("Digite a opção: ");
		scanf("%i",&escolhaFeita);
		system("cls");
		
		switch (escolhaFeita) {
			case 1:
				strcpy(respostaL,"adicionar");
				break;
			case 2:
				strcpy(respostaL,"remover");
				break;
		}
		
		if (strcmp(respostaL,"adicionar")==0) {
			printf("\n");
			printf("-------------------------------------------\n\n");
			printf("   Escolha um dos dias da semana abaixo    \n\n");
			printf("           1- Domingo                      \n");
			printf("           2- Segunda-feira                \n");
			printf("           3- Terça-feira                  \n");
			printf("           4- Quarta-feira                 \n");
			printf("           5- Quinta-feira                 \n");
			printf("           6- Sexta-feira                  \n");
			printf("           7- Sábado                       \n\n");
			printf("-------------------------------------------\n\n");
			printf("Digite a opção: ");
			scanf("%i",&escolhaFeita);
			fflush(stdin);
			printf("\n");
			
			switch (escolhaFeita) {
				case 1:
					strcpy(diaSemana,"Domingo");
					break;
				case 2:
					strcpy(diaSemana,"Segunda-feira");
					break;
				case 3:
					strcpy(diaSemana,"Terça-feira");
					break;
				case 4:
					strcpy(diaSemana,"Quarta-feira");
					break;
				case 5:
					strcpy(diaSemana,"Quinta-feira");
					break;
				case 6:
					strcpy(diaSemana,"Sexta-feira");
					break;
				case 7:
					strcpy(diaSemana,"Sábado");
					break;
			}
		
			tamColeta=sizeof(rotasAtribuidas.ids)/sizeof(rotasAtribuidas.ids[0]);
			bool existe=false;
		
			system("cls");	
			do {
				printf("Digite o código da coleta: ");
				scanf("%i",&codColeta);
				fflush(stdin);
				
				for (int x=0;x<tamColeta;x++) {
					if (rotasAtribuidas.ids[x]==codColeta) {
						existe=true;
					}
				}
			} while (!existe);
			
			int idTemp=criaIDCronograma();
			strcpy(cronograma.diaSemana[idTemp],diaSemana);
			cronograma.idRotaAtribuida[idTemp]=codColeta;
			
			
			system("cls");
			printf("Cronograma criado! \n\n");
			printf("Aperte ENTER para continuar");
			scanf("%c",&aperteEnter);
			fflush(stdin);
		} else {
			int tem=false;
			int pos;
			do {
				printf("Digite o código do cronograma que deseja remover: ");
				scanf("%i",&codRemover);
				fflush(stdin);
				int tam=sizeof(cronograma.idRotaAtribuida)/sizeof(cronograma.idRotaAtribuida[0]);
				for (int x=0;x<tam;x++) {
					if (cronograma.idRotaAtribuida[x]==codRemover) {
						tem=true;
						pos=x;
					}
				}
				cronograma.idRotaAtribuida[pos]=NULL;
			} while (tem==false);
		
		}
		system("cls");
		printf("Deseja adicionar ou remover mais coletas ao cronograma? (s/n) ");
		scanf("%c",&resposta);
		fflush(stdin);
		system("cls");
	} while (resposta=='s');
	
	
	
	system("pause");
	return 0;
}
