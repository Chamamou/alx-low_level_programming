#include <stdio.h>
/**
 * main - print a size of various type
 * Return: 0 (OK)
*/
int main(void)
{
	char x1;
	int x2;
	long int x3;
	long long int x4;
	float x5;
printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(x1));
printf("Size of an int: %lu byte(s)\n", (unsigned long)  sizeof(x2));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(x3));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(x4));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(x5));
return (0);
}

