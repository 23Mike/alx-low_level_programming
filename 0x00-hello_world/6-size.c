#include <stdio.h>
/**
 * main - Entry point
 * Description: print "size of data"
 * Return: 0
 */
int main(void)
{
printf("size of char is %zu bytes\n", sizeof(char));
printf("size of int is  %zu bytes\n", sizeof(int));
printf("size of long int is %zu bytes\n\n\n", sizeof(long int));

printf("size of unsigned long int is %zu bytes\n", sizeof(unsigned long int));
printf("size of float is %zu bytes\n", sizeof(float));

return (0);
}
