#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>


char cpf[12],rg[11],id,nome[20],nasc[9],end[80],num[11],user[80],pssw[80];

//----------------------------------------------------------------------
	void cadadm (){
    setlocale(LC_ALL,"portuguese"); 
		printf(" -----------------------------------------------------------\n");
		printf("   CADASTRO DE ADMINISTRADOR                                \n");
		printf("                                                            \n");
		printf("   ID:%i                                                    \n",id);
		printf("   NOME:%s                                                  \n",nome);
		printf("   CPF:%s                                                   \n",cpf);
		printf("   RG:%s                                                    \n",rg);
		printf("   DATA DE NASCIMENTO:%s                                    \n",nasc);
		printf("   ENDEREÇO:%s                                              \n",end);
		printf("   TELEFONE:%s                                              \n",num);
		printf("   SENHA:%s                                                 \n",pssw);
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("----------------------------------------------------------- \n");
		id=1;
	        }
  //--------------------------------------------------------------------------------------
  	void cadadmSUCC (){
    setlocale(LC_ALL,"portuguese"); 
		printf(" -----------------------------------------------------------\n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                 ADMINISTRADOR CADASTRADO                   \n");
		printf("                 COM SUCESSO !!!                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("----------------------------------------------------------- \n");
        }
  //-------------------------------------------------------------------------------------------
int main (){
setlocale(LC_ALL,"portuguese"); 
cadadm();
printf("INDIQUE O NOME DO ADMINISTRADOR:\n");
gets(nome);
system("cls");
cadadm();
printf("INDIQUE O CPF DO ADMINISTRADOR:\n");
gets(cpf);
system("cls");
cadadm();
printf("INDIQUE O RG DO ADMINISTRADOR:\n");
gets(rg);
system("cls");
cadadm();
printf("INDIQUE A DATA DE NASCIMENTO DO ADMINISTRADOR:\n");
gets(nasc);
system("cls");
cadadm();
printf("INDIQUE O ENDEREÇO DO ADMINISTRADOR:\n");
gets(end);
system("cls");
cadadm();
printf("INDIQUE O TELEFONE DO ADMINISTRADOR:\n");
gets(num);
system("cls");
cadadm();
printf("INDIQUE A SENHA DO ADMINISTRADOR:\n");
gets(pssw);
system("cls");
cadadmSUCC();
system ("pause");                     
	return 0;
}

