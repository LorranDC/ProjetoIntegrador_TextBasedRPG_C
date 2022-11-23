#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "printImage.h"
#include "pauseKey.h"
#include "cleanScreen.h"
#include "charactersAttributes.h"
#include "caveBattle.h"

char playerName[] = "";

int main(void)
{
	int 	choice;
	
	cleanScreen();

	printf("\n\n\n\n");
	printImage(fopen("images/titulo.txt", "r\n"));

	printf(" Ancião: Ah olá, qual é o seu nome?\n>");
	scanf(" %s", &playerName[0]); 
	//fgets(player.name, 51, stdin);

	cleanScreen();
	printImage(fopen("images/oldman.txt", "r\n"));
	printf(" Ancião: Ahhhh... Muito bem %s eu não tenho muito tempo para explicar mas nos encontraremos mais tarde e provavelmente voce não se lembrará de mim porém você entenderá tudo no final\n", playerName);
	printf(" Eu só...Eu só preciso que confie em mim\n\n");
	pauseKey();

	cleanScreen();
	printImage(fopen("images/jungle.txt", "r\n"));
	printf(" - - - - - - - *Você acorda em um lugar desconhecido, aparentemente uma selva de mata muito fechada* - - - - - - -\n\n");
	pauseKey();

	printImage(fopen("images/cave.txt", "r\n"));
	printf("- - - - - - - *Você encontrou a entrada de uma caverna* - - - - - - -\n");
	printf("Entre com o valor 1 para explorar ou entre com o valor 2 para seguir em frente\n>");
	scanf(" %i", &choice);

	switch(choice)
	{
		case 1:
		caveBattle();
		break;

		case 2:
		break;
	}
	printf("Seguindo a trilha . . .\n");
	sleep(3);


	pauseKey();

	return 0;



}

