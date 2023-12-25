#include "main.h"
/**
 * add - add function
 * @a: input
 * @b: input
 * Return: intger
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - sub function
 * @a: input
 * @b: input
 * Return: intger
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - mul function
 * @a: input
 * @b: input
 * Return: intger
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - div function
 * @a: input
 * @b: input
 * Return: intger
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - mod function
 * @a: input
 * @b: input
 * Return: intger
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by Zero\n");
		return (0);
	}
	return (a % b);
}
