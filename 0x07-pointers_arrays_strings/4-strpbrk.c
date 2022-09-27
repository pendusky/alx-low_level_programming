#include "main.h"

/**
  * _strpbrk - located the first occurence in S if any bytes in accep
  * @s: the string we look for occurrences in
  * @accept: the print we compare against
  *
  * Return: a pointer to the byte or NU
  */

char *_strpbrk(char *s, char *accept)

{

	char c, *p;



	for (c = *s; c != 0; s++, c = *s)

	{

		for (p = accept; *p != 0; p++)

		{

			if (c == *p)

			{

				return (s);

			}

		}

	}

return (0);

}

