#include<stdio.h>
/**
* main - Entry point
* Return: (0) success
*/
int main(void)
{
printf("size of a char: %u bytes(s)\n", sizeof(char));
printf("size of a int: %u bytes(s)\n", sizeof(int));
printf("size of a long int: %u bytes(s)\n", sizeof(long int));
printf("size of a long long int: %u bytes(s)\n", sizeof(long long int));
printf("size of a float : %u bytes(s)\n", sizeof(float));
return (0);
}