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
    printf("\n\n\n  ------------------------------\n");
    printf("  |   Criar nova rota (1):     |\n");
    printf("  |                            |\n");
    printf("  |  Atribuir rota à equipe(2):|\n");
    printf("  |                            |\n");
    printf("  ------------------------------\n\n ");
    scanf("%i",&escolha);
    fflush(stdin);
    switch (escolha){
     case 1:
      do{
       existe=false;
       printf("Qual o identificador da rota ?\n");
       scanf("%i",&rota[qtd].idrota);
       fflush(stdin); 
       for (int x=0;x<qtd;x++){ 
        if (rota[x].idrota == rota[qtd].idrota){
         printf("rota já existe\n");
         existe=true;}
        }
      }while (existe==true);
         printf("\nDigite o nome da nova rota\n");
         gets(rota[qtd].nome);
         fflush(stdin);
         printf("Qual é o seu identificador de administrador\n");
         scanf("%i",&rota[qtd].idadm);
         fflush(stdin);
         printf("a rota: %s -> foi criado com sucesso\n",rota[qtd].nome);
         
                   
     break;
     case 2:
      do{
      existe=false;
      printf("qual é o codigo da rota ?\n");
      scanf("%i",&codigo);
      fflush(stdin);
      for (int x=0;x<qtd;x++){
          if (codigo==rota[x].idrota)
           existe=true;
           }
           if (existe==false)
           printf("rota inexistente\n");
      }while (existe==false);
      do{ 
       existe=false;
       printf("qual equipe vai receber a rota ?\n");
       scanf("%c",&equipe);
       fflush(stdin);
       for (int x=0;x<qtd;x++){
           if (equipe==rota[x].equipe)
            existe=true;
           }
           if (existe==true)
            printf("equipe indisponivel\n");
      }while (existe==true);
      printf("rota atribuida a equipe  \n");    
     break;
    }
 printf("deseja fazer mais alguma coisa ?(s/n)\n");
 scanf("%c",&continua);
 qtd=qtd+1;
}while (continua=='s');  
    
    system("pause");
    return 0;
    }
