#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @word: Pointer to string
 *
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *word)
{
	int length;

	length = 0;

	while (word[length] != '\0')
	{
		if (word[length] >= 97 && word[length] <= 122)
		{
			word[length] = word[length] - 32;
		}
		length++;
	}
	return (word);
}
