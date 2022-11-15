#ifndef CLEANSCREEN_H
#define CLEANSCREEN_H

	void cleanScreen()
	{
		write(1,"\E[H\E[2J",7);
	}




#endif
