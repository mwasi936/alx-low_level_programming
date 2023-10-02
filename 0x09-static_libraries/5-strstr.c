#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: if the substring is located - pointer to the beginning of substring
 * if substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

						i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
