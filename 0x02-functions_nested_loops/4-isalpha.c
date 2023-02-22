#include "main.h"

/**
 * _isalpha - check the code
 * @i: declared character
 * Return: Always 1 if aplha else return 0.
 */
int _isalpha(int i)
{
  if ((i >= 65 && i <= 95) || (i >= 97 && i <= 122))
      return (1);
   else
  return (0);
}
