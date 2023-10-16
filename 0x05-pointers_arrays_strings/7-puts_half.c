#include "main.h"
/**
 * _stren - returns the length of a string
 * @s: string
 * Return: length
 */
int _stren(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
