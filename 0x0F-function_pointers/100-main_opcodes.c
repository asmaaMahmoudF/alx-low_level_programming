#include <stdio.h>
/**
* main - that searches for an integer
* @argc: the size of the argument vector
* @argv: the argument vector
* Return: int
*/
int main(int argc, char *argv[])
{
	int b;
	char *mem = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (b--)
		printf("%02x%c", *mem++ & 0xff, b ? ' ' : '\n');

	return (0);
}
