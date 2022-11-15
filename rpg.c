#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "printImage.h"
#include "playerAttributes.h"
#include "pauseKey.h"
#include "cleanScreen.h"


int main(void)
{
	struct playerAttributes player;

	cleanScreen();

	printf("\n\n\n\n");
	printImage(fopen("images/titulo.txt", "r\n"));

	printf(" Ancião: Ah olá, qual é o seu nome?\n>");
	scanf(" %s", &player.name);

	cleanScreen();
	printImage(fopen("images/oldman.txt", "r\n"));
	printf(" Ancião: Ahhhh... Muito bem %s eu não tenho muito tempo para explicar mas nos encontraremos mais tarde e provavelmente voce não se lembrará de mim porém você entenderá tudo no final\n", &player.name);
	printf(" Eu só...Eu só preciso que confie em mim\n\n");
	pauseKey();

	cleanScreen();
	printImage(fopen("images/jungle.txt", "r\n"));
	printf(" - - - - - - - *Você acorda em um lugar desconhecido, aparentemente uma selva de mata muito fechada* - - - - - - -\n\n");
	pauseKey();

	printImage(fopen("images/cave.txt", "r\n"));
	pauseKey();

	return 0;



}

