#include "main.h"

/**
* leet - encodes a string into 1337
* @str: string to encode
*
* Return: pointer to the encoded string
*/

char *leet(char *str)
{
int i, j;

char leet[] = "aAeEoOtTlL4433007711";

for (i = 0; str[i] != '\0'; i++)
       {

	       for (j = 0; leet[j] != '\0'; j += 2)
	       {
		       if (str[i] == leet[j])
		       {
			       str[i] = leet[j + 1];
			       break;
		       }
	      }
	}

      return (str);
}
