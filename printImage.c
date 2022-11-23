#include "printImage.h"
#include <stdio.h>


	void printImage(FILE *file)
	{

		int c;
		
		if (file) {
		    while ((c = getc(file)) != EOF)
			putchar(c);
		    fclose(file);
		}

	}