#include <stdio.h>
/**
* main - entry point prints all arguments it receives
* @argc: number of command line arguments
* @argv: pointer to an array of command line arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
int i = 0;
while (argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
