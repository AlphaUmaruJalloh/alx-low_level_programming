#include "main.h"
/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 *
 * Return: pointer to index of string at first occurence of whole substring
 */

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring the variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return (str1);
		}
		haystack = str1 + 1;
	}
	return (0);
}
