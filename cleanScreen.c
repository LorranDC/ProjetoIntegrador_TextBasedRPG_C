#include <unistd.h>
#include <stdio.h>

	void cleanScreen()
	{
		write(1,"\E[H\E[2J",7);
	}