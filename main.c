#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "printImage.h"
#include "pauseKey.h"
#include "clearScreen.h"
#include "charactersAttributes.h"
#include "elfDialogue.h"

char playerName[] = "";

struct	Player
	{
	int hp, atk, potion;
	}player;

void caveBattle(struct Player player1);
void witchBattle(struct Player player1);
void albebossBattle(struct Player player1);

int main()
{
	int choice;
	
	player.hp		= 100;
	player.atk		= 75;
	player.potion	= 0;

	clearScreen();

	printf("\n\n\n\n");
	printImage(fopen("images/titulo.txt", "r\n"));

	printf("Ancião> Ah olá, qual é o seu nome?\n>");
	scanf(" %s", &playerName[0]);

	clearScreen();
	printImage(fopen("images/oldMan.txt", "r\n"));
	printf("Ancião> Ahhhh... Muito bem %s eu não tenho muito tempo para explicar mas nos encontraremos mais tarde e provavelmente voce não se lembrará de mim porém você entenderá tudo no final\n", playerName);
	printf("Ancião> Eu só...Eu só preciso que confie em mim\n\n");
	pauseKey();

	clearScreen();
	printImage(fopen("images/jungle.txt", "r\n"));
	printf("->Você acorda em um lugar desconhecido, aparentemente uma selva de mata muito fechada\n\n");
	pauseKey();

	printImage(fopen("images/cave.txt", "r\n"));
	printf("->Você encontrou a entrada de uma caverna\n\n");
	printf("- - - - - - - - - - - - - - Entre com o valor 1 para explorar ou entre com o valor 2 para seguir em frente - - - - - - - - - - - - -\n>");
	scanf(" %i", &choice);

	switch(choice)
	{
		case 1:
		caveBattle(player);
		player.atk += 50;
		clearScreen();
		printImage(fopen("images/dagger.txt", "r\n"));
		printf("\n->Wooow! Você conseguiu a adaga usada pelo ORC! Portanto foi acrescentado 50 pontos de ataque ao seu personagem, agora você possui %d pontos de ataque!\n\n", player.atk);
		pauseKey();
		break;

		case 2:
		break;
	}
			
	printf("->Seguindo a trilha . . .\n\n");
	sleep(3);

	clearScreen();
	printImage(fopen("images/witchHut.txt", "r\n"));
	printf("->Ao longe você avista o que supostamente é a cabana de uma bruxa\n\n");
	printf("%s>Eu preciso de respostas!!! Aquele Ancião pode estar me esperando naquela cabana!!! Ou seja lá o que está à minha espera...\n", playerName);
	pauseKey();

	printf("->Caminhando até a cabana . . .\n\n");
	sleep(3);

	printf("%s>Bom, é melhor entrar logo\n", playerName);
	pauseKey();
	printf("->Entrando na cabana . . .\n\n");
	sleep(3);
	elfDialogue();
	clearScreen();	

	player.potion += 1;
	printImage(fopen("images/potionBottle.txt", "r\n"));
	printf("->Muito bem!!! Você conseguiu %d poção(ões) de cura. Agora você tem o direito de restaurar 100% dos seus pontos de vida!!!", player.potion);

	printf("%s>Ué, pra onde aquela coisa foi? Bem, não importa vou sair logo daqui...", playerName);
	pauseKey();
	witchBattle(player);
	clearScreen();
	albebossBattle(player);
	clearScreen();

	printImage(fopen("images/oldMan.txt", "r\n"));
	printf(Ancião> WOOOOOOOOOOOOOOOWWWW!!! Hahahahahahahahahahahahaha... Isso é o que eu chamo de quebra da quarta parede...\n\n);
	sleep(2);
	printf("%s> EEEEEEEEIIIIIIIIIII! COMO VOCÊ PÔDE APARECER SÓ AGORA???!!!\n\n", playerName);
	sleep(2);
	printf("%s> VOCÊ NÃO TEM IDEIA DAS COISAS PELAS QUAIS TIVE QUE PASSAR NESSE LUGAR!!!\n\n", playerName);
	sleep(2);
	printf("Ancião> Ufa... Você lembrou de mim\n\n");
	sleep(2);
	printf("%s> MAS É CLARO QUE EU ME LEMBRO! ESTIVE TE PROCURANDO O TEMPO TODO!\n\n", playerName);
	sleep(2);
	printf("Ancião> Hahaha... Você concluiu sua missão rapaz, não vai precisar passar por mais nada...\n\n");
	sleep(2);
	printf("%s> Estou sem entender até agora... Qual era de fato essa tal missão?\n\n", playerName);
	sleep(2);
	printf("Ancião> Você ajudou o Lorran a concluir seu trabalho de Projeto Integrador referente ao segundo período do curso de Ciência da Computação no UNIS-Varginha!!!");
	sleep(2);
	printf("%s> Eu passo por tudo isso a fim de obter respostas... E O QUE EU RECEBO NO FIM SÃO PERGUNTAS E MAIS PERGUNTAS???!!! Quem é esse Lorran? O que é Projeto Integrador? O que é esse tal de curso de Ciência da Computação nesse tal de UNIS-Varginha?\n\n");
	sleep(2);
	printf("Ancião> É uma looooonga história... Mas o que importa é que você conseguiu... Mas não precisa se alterar! Você terá a sua recompensa.\n\n");
	sleep(2);
	pauseKey();
	clearScreen();
	printImage(fopen("images/coke.txt", "r\n"));
	printf("Ancião> Aqui está... Uma Coquinha Gelada...\n\n");
	sleep(2);
	printf("%s> O que é isso?\n\n");
	sleep(2);
	printf("Ancião> Ahhhhh rapaz...\n\n");
	sleep(2);
	printf("Ancião> É uma bebida lendária...\n\n");
	sleep(2);
	printf("Ancião> A perfeição em espécie...\n\n");
	sleep(2);
	printf("Ancião> Uma verdadeira dádiva divina...\n\n");
	sleep(2);
	printf("%s> Como e de onde você tirou algo tão especial assim?\n\n");
	sleep(2);
	printf("Ancião> Você não acha que faz perguntas demais? Apenas... Desfrute...\n");
	sleep(2);
	pauseKey();
	clearScreen();
	printImage(fopen("images/endGame.txt", "r\n"));


	return 0;

}

void caveBattle(struct Player player1)
	{
		Orc		orc;
		int		battleChoice = 0;
		int		init = 1;
		orc.hp 		= 150;
		orc.atk		= 50;

		strcpy(orc.name, "Orc");

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
		clearScreen();

		
		while((init = 1))
		{
			printf(" Você precisa declarar uma variável idade do tipo inteiro. Qual a maneira correta de fazer isso em C?\n\n");
			printf(" 1-idade int;\n");
			printf(" 2-int idade;\n");
			printf(" 3-float idade;\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				player1.hp -= orc.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				orc.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
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
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 2:
				player.hp -= orc.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
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
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				orc.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, orc.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 3:
				player.hp -= orc.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", orc.atk, orc.name);
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
				caveBattle(player);
			}
			else
			{
				exit(0);
			}
		}
		else
		{	
			printf(" Muito bem!!! Você o derrotou!!!\n\n");
			pauseKey();	
		}
	}

	void witchBattle(struct Player player1)
	{
		Witch		witch;
		int		battleChoice = 0;
		int		init = 1;
		witch.hp 		= 200;
		witch.atk		= 100;

		strcpy(witch.name, "Bruxa");

		printImage(fopen("images/witch.txt", "r\n"));
		sleep(2);
		printf("%s> O QUE VOCÊ ESTÁ FAZENDO AQUI???!!!\n\n", witch.name);
		sleep(2);
		printf("%s> EU... EU... EU...\n\n", playerName);
		sleep(2);
		printf("%s> NÃO INTERESSA, DE QUALQUER FORMA VOCÊ NÃO DEVERIA ESTAR AQUI!!! VOCÊ IRÁ SOFRER AS CONSEQUÊNCIAS!!!\n\n", witch.name);
		sleep(2);
		pauseKey();
		clearScreen();

		
		while((init = 1))
		{
			printf(" Tratando-se de estruturas de dados em árvore, qual das opções abaixo representa o conceito de folha?\n\n");
			printf(" 1-Um nó que não possui sub-árvores.\n");
			printf(" 2-É uma nomenclatura alternativa para o nó raiz.\n");
			printf(" 3-Um nó com dois pais e mais de dois filhos.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				witch.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, witch.name);
				printf(" Agora ela tem %d pontos de vida!\n\n", witch.hp);
				break;

				case 2:
				player1.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}

			if(player.hp || orc.hp <= 0)
			{
				if(player.hp <= 0)
				{
					int choice;
					printf("Você deseja usar a sua poção de cura\n");
					printf(" - - - - - entre com o valor 1 para usar ou entre com o valor 2 caso não queira . . . - - - - -\n>");
					scanf(" %i", &choice);
					if(choice == 1)
					{
						player.hp = 100;
					}
					else
					{
						break;
					}
				}
				else
				{
				break;
				}
			}

			printf(" Qual é a principal característica de uma árvore binária completa?\n\n");
			printf(" 1-Possuir todas folhas no mesmo nível.\n");
			printf(" 2-Possuir um número ímpar de folhas.\n");
			printf(" 3-Possuir apenas dois níveis.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{

				case 1:
				witch.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, witch.name);
				printf(" Agora ela tem %d pontos de vida!\n\n", witch.hp);
				break;

				case 2:
				player.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}

			if(player.hp || orc.hp <= 0)
			{
				if(player.hp <= 0)
				{
					int choice;
					printf("Você deseja usar a sua poção de cura\n");
					printf(" - - - - - entre com o valor 1 para usar ou entre com o valor 2 caso não queira . . . - - - - -\n>");
					scanf(" %i", &choice);
					if(choice == 1)
					{
						player.hp = 100;
					}
					else
					{
						break;
					}
				}
				else
				{
				break;
				}
			}

			printf(" Qual o principal objetivo da organização de dados em estruturas de árvores de busca binária?\n\n");
			printf(" 1-Facilitar a busca de um determinado valor.\n");
			printf(" 2-Permitir a exclusão de registros em estruturas de dados.\n");
			printf(" 3-Facilitar a alteração dos valores raiz.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				witch.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, witch.name);
				printf(" Agora ela tem %d pontos de vida!\n\n", witch.hp);
				break;

				case 2:
				player.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= witch.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", witch.atk, witch.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}
			break;
		}

		if(player.hp < witch.hp)
		{
			int select;
			printImage(fopen("images/deathSkull.txt", "r\n"));
			printf(" Você morreu!\n\n");
			printf(" Deseja tentar novamente ou sair do jogo?\n\n");
			printf(" - - - - - entre com o valor 1 para tentar novamente ou entre com o valor 2 para sair do jogo . . . - - - - -\n>");
        	scanf(" %i", &select);
			
			if(select == 1)
			{
				witchBattle(player);
			}
			else
			{
				exit(0);
			}
		}
		else
		{	
			printf(" Muito bem!!! Você a derrotou!!!\n\n");
			pauseKey();	
		}
	}

	void albebossBattle(struct Player player1)
	{
		Albeboss		albeboss;
		int			battleChoice = 0;
		int			init = 1;
		albeboss.hp		= 200;
		albeboss.atk	= 999;

		strcpy(albeboss.name, "ALBEBOSS");

		printImage(fopen("images/albeboss.txt", "r\n"));
		printf("%s> NÃÃÃÃÃÃÃÃÃÃÃÃÃÃÃÃÕOOOOOOOO!!! VOCÊ ESTÁ ESTRAGANDO TUDO\n\n", albeboss.name);
		sleep(2);
		printf("%s> VOCÊ NÃO PODE SIMPLESMENTE SAIR DESTRUINDO MEUS SUBORDINADOS!!! MEUS PLANOS!!! MINHAS REGRAS!!!\n\n", albeboss.name);
		sleep(2);
		printf("%s> DO QUE VOCÊ ESTÁ FALANDO? EU NEM SEI QUEM É VOCÊ OU O QUE É VOCÊ\n\n", playerName);
		sleep(2);
		printf("%s> Se bem que você me parece tão... Diferente... Você não é desse lugar...");
		sleep(2);
		printf("%s> ISSO NÃO É DA SUA CONTA!!! NÃO ME IMPORTA O QUE VOCÊ PENSA QUE SOU!!! Mas você com certeza saberá do que sou capaz... \n\n", albeboss.name);
		sleep(2);
		pauseKey();
		clearScreen();

		
		while((init = 1))
		{
			printf(" Temos no contexto computacional diversas nomenclaturas e definições acerca dos conceitos e de suas respectivas aplicações. Assinale a alternativa que traz o conceito que define o que é um grafo.​​​​​​​\n\n");
			printf(" 1-Entidade de formação simples, a qual pode ter nomes e atributos.\n");
			printf(" 2-É um conjunto de pesos estabelecidos aos vértices.\n");
			printf(" 3-É um agrupamento formado por arestas e vértices.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				albeboss.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, albeboss.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", albeboss.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}

			printf(" As arestas podem ser definidas tanto como dirigidas/orientadas quanto como não dirigidas/não orientadas. Dessa forma, assinale a alternativa que traz as definições corretas destes conceitos.​​​​​​​\n\n");
			printf(" 1-Um grafo é considerado dirigido quando tem uma entidade de formação simples, a qual pode ter nomes e atributos, e não dirigido quando as setas de indicação das arestas apontam apenas para o mesmo vértice.\n");
			printf(" 2-Um grafo não dirigido é quando a aresta de um ponto contém a indicação de um próximo ponto, e o grafo dirigido não precisa de indicação, tendo em vista que já é definido.\n");
			printf(" 3-A orientação de um grafo é quando o peso definido em um vértice indica que o grafo foi ordenado. A não orientação remete ao uso de setas indicando as possíveis direções das arestas.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{


				case 1:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 2:
				albeboss.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, albeboss.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 3:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}
			if(player.hp || albeboss.hp <= 0)
			{
				break;
			}

			printf(" Um grafo pode ser representado de forma adequada por meio de matrizes e listas, tendo cada uma delas uma maneira diferente de representação e acesso aos elementos. O armazenamento das arestas com um componente adicional acontece por meio de qual estrutura?​​​​​​​\n\n");
			printf(" 1-Matriz de adjacência.\n");
			printf(" 2-Algoritmo de busca por largura.\n");
			printf(" 3-Lista de adjacências.\n\n>");
			scanf(" %i", &battleChoice);

			switch(battleChoice)
			{
				case 1:
				albeboss.hp -= player.atk;
				printf(" Você desferiu -%d de dano em %s!\n\n", player.atk, albeboss.name);
				printf(" Agora ele tem %d pontos de vida!\n\n", orc.hp);
				break;

				case 2:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				case 3:
				player.hp -= albeboss.atk;
				printf(" Você sofreu -%d de dano de %s!\n\n", albeboss.atk, albeboss.name);
				printf(" Agora você tem %d pontos de vida!\n\n", player.hp);
				break;

				default:
				printf(" Valor Inválido!\n");	
			}
			break;
		}

		if(player.hp < albeboss.hp)
		{
			int select;
			printImage(fopen("images/deathSkull.txt", "r\n"));
			printf(" ->Você morreu!\n\n");
			printf(" ->Deseja tentar novamente ou sair do jogo?\n\n");
			printf(" - - - - - entre com o valor 1 para tentar novamente ou entre com o valor 2 para sair do jogo . . . - - - - -\n>");
        		scanf(" %i", &select);
			
			if(select == 1)
			{
				albebossBattle(player);
			}
			else
			{
				exit(0);
			}
		}
		else
		{	
			printf("%s>NÃÃÃÃÃÃÕOOOO VOCÊ IRÁ PAGAR POR ISSO!!! IRÁ PAGAR MUITO CARO!!!!\n\n", albeboss.name);
			printf(" ->Muito bem!!! Você o derrotou!!!\n\n");
			pauseKey();	
		}
	}




