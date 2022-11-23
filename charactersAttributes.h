#ifndef CHARACTERSATTRIBUTES_H
#define CHARACTERSATTRIBUTES_H

	typedef struct playerAttributes
	{
		int hp, atk, potion;
	}Player;
	
	typedef struct orcAttributes 
	{
		int  hp, atk;
		char name[10];
	}Orc;

#endif