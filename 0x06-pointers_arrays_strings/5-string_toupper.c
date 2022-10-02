#include "main.h"

/**
*string_toupper - function
*@s : char params
*Return: char  value
*/

char *string_toupper(char *s)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
