#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <sys/stat.h>

//TELA DE LOGIN E SENHA EM CPP;

void gotoxy(int x, int y){
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
}

void telainicio(){
	gotoxy(20,10); printf("OLA, BEM VINDO A TELA DE LOGIN E SENHA FEITO POR MIM!");
	gotoxy(20,11); printf("PORFAVOR, DIGITE O SEU LOGIN E SENHA:");
	gotoxy(1,1); printf("FEITO BY MATHEUS REBOUCAS");
}

typedef struct{
	char login[15];
	char senha[15];
} pessoa; pessoa p[1];

void inicio(){
	
	int op;
	char login[15];
	char senha[15];
	bool Usuario_Logado = false;
	
	strcpy(p[0].login, "teste");
	strcpy(p[0].senha, "teste");
	
	
	do{
	
	//LOGIN
	gotoxy(20,20); printf("INFORME O LOGIN:");
		gotoxy(37,20); scanf("%s",&login);
			fflush(stdin);
			
	//SENHA
	gotoxy(20,22); printf("INFORME A SENHA:");
		gotoxy(37,22); scanf("%s",&senha);
			fflush(stdin);
	
	if((strcmp(login, p[0].login) == 0) && (strcmp(senha, p[0].senha) == 0)){
		MessageBox (NULL, "Usuario Logado!" , "Tela de Login e senha", 1);
		Usuario_Logado = true;	
	}else if ((strcmp(login, p[0].login) != 0) && (strcmp(senha, p[0].senha) == 0)){
		MessageBox (NULL, "Verifique suas credenciais" , "Tela de Login e senha", 1);
		Usuario_Logado = false;
	}else if ((strcmp(login, p[0].login) == 0) && (strcmp(senha, p[0].senha) != 0)){
		MessageBox (NULL, "Verifique suas credenciais" , "Tela de Login e senha", 1);
		Usuario_Logado = false;
	} else{
		MessageBox (NULL, "Verifique suas credenciais" , "Tela de Login e senha", 1);
		Usuario_Logado = false;
	}
	
	}while(Usuario_Logado = false);
		
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("mode con:cols=150 lines=60");
	telainicio();
	inicio();
	
	
	return 0;
}
