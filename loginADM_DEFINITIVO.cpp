#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>


char user[80],pssw[80];

//----------------------------------------------------------------------
	void ADM (){
    setlocale(LC_ALL,"portuguese"); 
		printf(" -----------------------------------------------------------\n");
		printf("   LOGIN ADMINISTRADOR                                      \n");
		printf("                                                            \n");
		printf("   USUÁRIO (CPF):%s                                         \n",user);
		printf("   SENHA:%s                                                 \n",pssw);
		printf("                                                            \n");
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
  	void ADMsucc (){
    setlocale(LC_ALL,"portuguese"); 
		printf(" -----------------------------------------------------------\n");
		printf("   LOGIN ADMINISTRADOR                                      \n");
		printf("                                                            \n");
		printf("   USUÁRIO (CPF):%s                                         \n",user);
		printf("   SENHA:%s                                                 \n",pssw);
		printf("                                                            \n");
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
//---------------------------------------------------------------------------------------------------
 	void MAINmenu(){
    setlocale(LC_ALL,"portuguese"); 
		printf(" -----------------------------------------------------------\n");
		printf("   MENU PRINCIPAL                                           \n");
		printf("                                                            \n");
		printf("   1)CADASTRAR ROTA                                         \n");
		printf("   2)CRONOGRAMA SEMANAL DE COLETA                           \n");
		printf("   3)CADASTRAR EQUIPE                                       \n");
		printf("   4)DEFINIR ROTA/EQUIPE                                    \n");
		printf("   5)CAMINHÕES                                              \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("                                                            \n");
		printf("----------------------------------------------------------- \n");
}
//-----------------------------------------------------------------------------------------------------
int main (){
setlocale(LC_ALL,"portuguese"); 
ADM();
gets(user);
system("cls");
ADM();
gets(pssw);
system("cls");
MAINmenu();
system ("pause");                     
	return 0;
}

