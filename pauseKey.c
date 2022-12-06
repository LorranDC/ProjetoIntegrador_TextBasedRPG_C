#include "pauseKey.h"
#include <stdio.h>

	void pauseKey()
	{
		int select;

		printf(" - - - - - - - - - - - - - - - - - - - - - - - ENTRE COM O VALOR 1 PARA CONTINUAR . . . . . . - - - - - - - - - - - - - - - - - - - - \n>");
        scanf(" %i", &select);

		if(select != 1)
		{
			printf("Valor Inválido! \n\n>");
			pauseKey();
		}
	}