#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print a-z
 * Description: print the alphabet in lowercase followed by a newline
 * Return: void
*/
void print_alphabet(void)

{
char c;

for  (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
