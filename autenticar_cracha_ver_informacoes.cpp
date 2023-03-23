//RF03
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

char aperteEnter;
int numeroEquipe,numeroRota,horaInicio;

typedef struct {
	char nome[20];
	char integrantes[3][20];
	char caminhao[9];
} Equipe;

typedef struct {
	int codigo;
	char nome[20];
	char duracao;
} Rota;

Equipe equipes[2];
Rota rotas[2];

char* buscarNomeIntegrante(int equipe, int pos) {
	return equipes[equipe].integrantes[pos];
}

char* buscarNomeEquipe(int equipe) {
	return equipes[equipe].nome;
}

char* buscarCaminhao(int equipe) {
	return equipes[equipe].caminhao;
}

int buscarCodigoRota(int rota) {
	return rotas[rota].codigo;
}

char* buscarNomeRota(int rota) {
	return rotas[rota].nome;
}

int calcularFimRota(int rota, int inicio) {
	return inicio+rotas[rota].duracao;
}

int main() {
	setlocale(LC_ALL,"portuguese");
	
	// Alimentando o vetor de equipes
	strcpy(equipes[0].nome,"Equipe 1");
	strcpy(equipes[0].integrantes[0],"Emanuel Gomes");
	strcpy(equipes[0].integrantes[1],"Cleiton Alpes");
	strcpy(equipes[0].integrantes[2],"Emilia Gaspar");
	strcpy(equipes[0].caminhao,"DIT-6D37");
	
	strcpy(equipes[1].nome,"Equipe 2");
	strcpy(equipes[1].integrantes[0],"Vitor Jonson");
	strcpy(equipes[1].integrantes[1],"Maria Cardoso");
	strcpy(equipes[1].integrantes[2],"Fernando Marins");
	strcpy(equipes[1].caminhao,"TIT-9S26");
	
	//Alimentando o vetor de rotas
	rotas[0].codigo=7;
	strcpy(rotas[0].nome,"Zona 7");
	rotas[0].duracao=3;
	
	rotas[1].codigo=3;
	strcpy(rotas[1].nome,"Zona 8");
	rotas[1].duracao=2;
	
	
	
	//Escolhendo uma equipe aleatória para deixar o teste mais dinâmico
	srand(time(NULL));
	numeroEquipe=rand()%2;
	numeroRota=rand()%2;
	
	
	
	printf("Aproxime seu crachá do leitor para ver as informações do seu trabalho \n\n");
	printf("             -------------------------------------- \n");
	printf("              Aperte ENTER para aproximar o crachá \n ");
	printf("            -------------------------------------- \n\n");
	printf("As informações do seu trabalho serão exibidas nesta tela");
	scanf("%c",&aperteEnter);
	system("cls");
	
	printf("Nome: %s \n\n",buscarNomeIntegrante(numeroEquipe,0));
	printf("Equipe: %s \n\n",buscarNomeEquipe(numeroEquipe));
	printf("Integrantes da equipe: %s, %s\n\n",buscarNomeIntegrante(numeroEquipe,1),buscarNomeIntegrante(numeroEquipe,2));
	printf("Caminhão da equipe: %s \n\n",buscarCaminhao(numeroEquipe));
	printf("Rota de hoje: Rota número %i - %s \n\n",buscarCodigoRota(numeroRota),buscarNomeRota(numeroRota));
	horaInicio=7;
	printf("Horário de início Previsto: %i:00 \n\n",horaInicio);
	printf("Horário de término previsto: %i:00 \n\n",calcularFimRota(numeroRota,horaInicio));
	
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
}
