#include <stdio.h>
#include "elfDialogue.h"

	void elfDialogue()
	{
		int i = 1;

		printf("%s>Meu Deus... QUE CHEIRO HORRÍVEL\n\n", playerName);
		sleep(2);		
		printf("%s>Com certeza tem algo morto aqui...\n\n", playerName);
		pauseKey();
		clearScreen();

		printImage(fopen("images/elf.txt", "r\n"));
		
		printf("Duende>Algum problema amiguinho?\n\n");
		sleep(1);
		printf("%s>COMO ASSIM? QUEM É VOCÊ? DE ONDE VOCÊ SURGIU E COMO FEZ ISSO???\n\n", playerName);
		sleep(1);		
		printf("Duende>Alguém já te disse que você faz perguntas demais?\n\n");
		sleep(1);
		printf("%s>Olha... Eu realmente não quero nada com você, não quero te fazer mal, eu só preciso...\n\n");
		sleep(1);
		printf("Duende>Encontrar uma pessoa, sei...\n\n");
		sleep(1);
		printf("%s>Como...? como...?\n\n");
		sleep(1);
		printf("Duende>Pfffff... Você não ouviu o que eu disse sobre perguntas\n\n");
		sleep(1);
		printf("Duende>Enfim, já te adianto que você não vai encontrar ninguém aqui, a proprietária não está presente no momento\n\n");
		sleep(1);
		printf("%s>Perai... ProprietáriA?\n\n", playerName);
		sleep(1);
		printf("Duende>Sim mas ela não gostaria da sua presença então é melhor já ir dando meia volta rapaz\n\n");
		sleep(1);
		printf("Duende>MAAASSS... Para você não sair de mãos vazias eu tenho algo que talvez te interesse...\n\n");
		sleep(1);
		printf("%s>Então me dá logo antes que ela apareça!!!\n\n", playerName);
		sleep(1);
		printf("Duende>Não vai ser tão fácil assim... Bom... Você gosta de charadas?\n\n");
		sleep(1);
		printf("%s>Pffff denovo... Anda logo com isso vai...\n\n", playerName);		
		sleep(1);
		printf("Duende>Se você acertar todas as perguntas eu te dou o que tenho de muito útil a lhe oferecer...\n\n");
		pauseKey();
		clearScreen();

		while(i)
		{
			int choice;

			printf("Sobre as operações de leitura e escrita de informações em arquivos, é correto afirmar que:\n\n");
			printf("1-São operações que podem ser feitas independentemente da realização das operações de abertura e fechamento do arquivo.\n");
			printf("2-Os dados gravados no arquivo são, antes, armazenados em uma área padrão, portanto, o comando de escrita não precisa referenciá-lo.\n");
			printf("3-Utilizam os mesmos comandos usados para fazer essas operações na entrada e saída padrão.\n>");
			scanf(" %i", &choice);
			
			if(choice != 3)
			{
				i = -1;
				break;
			}
			else
			{
				continue;
			}

						
		}

		if(i == -1)
		{
			printf("Você errou!!!!!\n");
			pauseKey();
		}


	}