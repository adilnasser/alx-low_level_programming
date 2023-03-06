/**
 *_strchr - a function that locates a character in a string.
 * @s: pointer to the  string
 * @c: occurrence of the character
 * Returns a pointer to the first occurrence or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	char Corrunced_char = NULL;

	while (s[i] != "\0")
	{
		if (s[i] == c)
		{
			Corrunced_char = s[i];
			i++;
			break;
		}

		return (Corrunced_char);
	}
}
