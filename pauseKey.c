#include "pauseKey.h"
#include <stdio.h>

	void pauseKey()
	{
		int select;

		printf(" - - - - - entre com o valor 1 para continuar . . . - - - - -\n>");
        scanf(" %i", &select);

		if(select != 1)
		{
			printf("Valor Inválido! \n\n>");
			pauseKey();
		}
	}