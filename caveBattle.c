#include <stdio.h>
#include "caveBattle.h"
#include "charactersAttributes.h"

	void caveBattle()
	{
		Orc		orc;
		Player	player;
		int		battleChoice = 0;
		int		init = 1;

		player.hp	= 100;
		player.atk	= 75;
		orc.hp 		= 150;
		orc.atk		= 50;

		strcpy(orc.name, "ORC");

		printImage(fopen("images/orc.txt", "r\n"));
		printf("%s> MEU DEUS!!!! UM ORC!!! Não terei escolha...\n\n", playerName);
		sleep(2);
		printf("%s> HAHAHAHAHAHAH VOCÊ NÃO VAI SAIR DAQUI TÃO FACIL\n\n", orc.name);
		sleep(2);
		printf("%s> O QUE?!!! ESSE BICHO FALA?!!!\n\n", playerName);
		sleep(2);
		printf("%s> VOCÊ TERÁ QUE RESPONDER ALGUMAS PERGUNTINHAS... CASO ERRE, SOFRERÁ AS CONSEQUÊNCIAS... CASO ACERTE, PODERÁ ME FERIR...\n\n", orc.name);
		sleep(2);
		printf("%s> AINDA POR CIMA É INTELIGENTE?! Era só o que me faltava...\n\n", playerName);
		sleep(2);
		pauseKey();
		cleanScreen();

		
		while(init = 1)
		{
			printf(" Você precisa declarar uma variável idade do tipo inteiro. Qual a maneira correta de fazer isso em C?\n\n");
			printf(" 1-idade int;\n");
			printf(" 2-int idade;\n");
			printf(" 3-float idade;\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				orc.hp -= player.atk;
				printf(" Você desferiu -50 de dano em %s!\n\n", orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}

			printf(" Ao declarar uma variável que armazena um caractere, você escreveu a seguinte linha de código: char -nome; Ao compilar o programa, verificou que essa declaração gerou um erro de sintaxe. Qual a alternativa que indica esse erro?\n\n");
			printf(" 1-Variáveis não devem começar com caracteres especiais como o hífen utilizado na declaração.\n");
			printf(" 2-Faltou inicializar a variável, pois, em C, não podemos usar uma variável sem antes inicializá-la.\n");
			printf(" 3-Durante a declaração, não é preciso o ponto e vírgula no final da linha de código.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{

				case 1:
				orc.hp -= player.atk;
				printf(" Você desferiu -50 de dano em %s!\n\n", orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 2:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}
			if(player.hp || orc.hp >= 0)
			{
				break;
			}

			printf(" Por que, em alguns casos, é interessante inicializar uma variável em C?\n\n");
			printf(" 1-Porque o nome da variável pode já ter sido usado por algum programa.\n");
			printf(" 2-Para não corrermos o risco de utilizar um valor armazenado anteriormente por outro programa naquele espaço de memória.\n");
			printf(" 3-Porque é uma boa prática para um melhor entendimento do código-fonte.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				orc.hp -= player.atk;
				printf(" Você desferiu -50 de dano em %s!\n\n", orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -50 de dano de %s!\n\n", orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}
			break;
		}

		if(player.hp < orc.hp)
		{
			int select;
			printImage(fopen("images/deathSkull.txt", "r\n"));
			printf(" Você morreu!\n\n");
			printf(" Deseja tentar novamente ou sair do jogo?\n\n");
			printf(" - - - - - entre com o valor 1 para tentar novamente ou entre com o valor 2 para sair do jogo . . . - - - - -\n>");
        	scanf(" %i", &select);
			
			if(select == 1)
			{
				caveBattle();
			}
			else
			{
				exit(0);
			}
		}
		else
		{
			printImage(fopen("images/knife.txt", "r\n"));
			printf("");
		}
	}
