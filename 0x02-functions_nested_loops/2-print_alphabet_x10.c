#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * followed by new line.
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;
for  (i = '0'; i <= '9'; i++)
{
for  (j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
putchar(j);
}
}

