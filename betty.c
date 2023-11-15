#include "main.h"

/**
* betty - prints Hello Betty
*
* Return: 0 on success
*/

int betty(void)
{
	char *text = "Hello, Betty!\n";
	write(1, text, strlen(text));
        return 0;
}
