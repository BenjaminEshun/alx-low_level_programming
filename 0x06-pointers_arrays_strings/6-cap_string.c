#include <string.h>
#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str - the string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (i == 0)
		{
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		else if (*str == 32 || *str == 9 || *str == 10 || *str == 44 || *str == 59 || *str == 46 || *str == 33 || *str == 63 || *str == 34 || *str == 40|| *str == 41 || *str == 123 || *str == 125)
		{
			str++;

			if (*str >= 97 && *str <= 122)
			{
				*str = *str - 32;
			}
			else
			{
				str++;

				if (*str >= 97 && *str <= 122)
					*str = *str - 32;

				i--;
			}

			i++;
		}
		else
		{
			if (*str >= 65 && *str <= 90)
				*str = *str + 32;
		}
		str++;
	}
	return (str);
}
