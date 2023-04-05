#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int escolha,qtd,codigo;
bool existe;
char continua,equipe;
typedef struct {
       char nome[20];
       int idrota;
       int idadm;
       char equipe;  
       } novarota;
novarota rota[6];


int main(){
    qtd=4;
    setlocale(LC_ALL,"portuguese");
    rota[0].idrota=1;
    rota[1].idrota=2;
    rota[2].idrota=3;
    rota[3].idrota=4;
    rota[0].equipe='A';
    rota[1].equipe='B';
    rota[2].equipe='C';
  do{
  	system("cls");
    printf("\n\n\n  ------------------------------\n");
    printf("  |   Criar nova rota (1):     |\n");
    printf("  |                            |\n");
    printf("  |  Atribuir rota à equipe(2):|\n");
    printf("  |                            |\n");
    printf("  ------------------------------\n\n ");
    printf("Escolha uma opção: ");
    scanf("%i",&escolha);
    printf("\n");
    fflush(stdin);
    switch (escolha){
     case 1:
      do{
       existe=false;
       printf("Qual o identificador da rota? ");
       scanf("%i",&rota[qtd].idrota);
       fflush(stdin); 
       printf("\n");
       for (int x=0;x<qtd;x++){ 
        if (rota[x].idrota == rota[qtd].idrota){
         printf("rota já existe\n");
         printf("\n");
         existe=true;}
        }
      }while (existe==true);
         printf("Digite o nome da nova rota: ");
         gets(rota[qtd].nome);
         fflush(stdin);
         printf("\n");
         printf("Qual é o seu identificador de administrador? ");
         scanf("%i",&rota[qtd].idadm);
         fflush(stdin);
         printf("\n");
         printf("a rota: %s -> foi criado com sucesso\n",rota[qtd].nome);
         printf("\n");
         
                   
     break;
     case 2:
      do{
      existe=false;
      printf("Qual é o codigo da rota? ");
      scanf("%i",&codigo);
      fflush(stdin);
      for (int x=0;x<qtd;x++){
          if (codigo==rota[x].idrota)
           existe=true;
           }
           if (existe==false)
           printf("Rota inexistente\n");
           printf("\n");
      }while (existe==false);
      do{ 
       existe=false;
       printf("Qual equipe vai receber a rota? ");
       scanf("%c",&equipe);
       fflush(stdin);
       printf("\n");
       for (int x=0;x<qtd;x++){
           if (equipe==rota[x].equipe)
            existe=true;
           }
           if (existe==true)
            printf("Equipe indisponivel\n");
            printf("\n");
      }while (existe==true);
      printf("Rota atribuida a equipe  \n");
	  printf("\n");    
     break;
    }
 printf("Deseja fazer mais alguma coisa? (s/n) \n");
 scanf("%c",&continua);
 qtd=qtd+1;
}while (continua=='s');  
    
    system("pause");
    return 0;
    }
