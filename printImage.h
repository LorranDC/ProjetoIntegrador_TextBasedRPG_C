#ifndef PRINTIMAGE_H
#define PRINTIMAGE_H


void printImage(FILE *file)
{

	int c;
	
	if (file) {
	    while ((c = getc(file)) != EOF)
		putchar(c);
	    fclose(file);
	}

}


#endif

