#include "main.h"

/**
* _strcat - appends the src string to the dest string
* @dest: pointer to the destination string
* @src: pointer to the source string
*
* Return: pointer to the resulting string dest, which is the concatenation of
*         dest and src strings.
*/

char *_strcat(char *dest, char *src)
{

int lenghtdest = 0, lenghtsrc = 0;

int j = 0;

while (dest[lenghtdest] != '\0')
lenghtdest++;


while (src[lenghtsrc] != '\0')
lenghtsrc++;

while (*(src + j) != '\0')
{
*(dest + lenghtdest) = *(src + j);
lenghtdest++;
j++;
}

*(dest + lenghtdest) = '\0';

return (dest);
}
