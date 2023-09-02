#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point multiplies two numbers
* @argc: number of command line arguments
* @argv: pointer to an array of command line arguments
* Return: 0
*/

int main(int argc, char const *argv[])
{
int sum = 0;
if (argc == 3)
{
sum = atoi(argv[1] * argv[2]);
printf("%d\n", sum);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
