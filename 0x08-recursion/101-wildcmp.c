#include "main.h"
#include <stdio.h>
/**
* search_other -  concatenates two strings
* @s: input
* @str: input
* @counter: input
* Return: int
*/
int search_other(char s, char *str, int *counter)
{
	if (s == *str)
		return (1);
	else if (*str == '\0')
		return (0);
	else if (s == '*')
		return (0);
	else
	{
		*counter += 1;
		return (search_other(s, ++str, &*counter));
	}
}
/**
* wildcmp - compares two strings and returns 1
* if the strings can be considered identical, otherwise return 0.
* @s1: input
* @s2: input
* Return: int
*/
int wildcmp(char *s1, char *s2)
{
	int counter;

	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));
	else if (*s1 == '*')
	{
		counter = 0;
		search_other(*++s1, s2, &counter);
		s2 += counter;
		return (wildcmp(s1++, s2++));
	}
	else if (*s2 == '*')
	{
		counter = 0;
		search_other(*++s2, s1, &counter);
		s1 += counter;
		return (wildcmp(s1++, s2++));
	}
	else
		return (0);
}
