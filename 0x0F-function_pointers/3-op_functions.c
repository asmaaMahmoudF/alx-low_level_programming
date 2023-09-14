#include "3-calc.h"

/**
* op_add - add two integers
* @a: input
* @b: input
* Description: op_add add two integers
* Return: the sum
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - sub two integers
* @a: input
* @b: input
* Description: op_sub sub two integers
* Return: the sub
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - mul two integers
* @a: input
* @b: input
* Description: op_mul mul two integers
* Return: the mul
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divid two integers
* @a: input
* @b: input
* Description: op_div  divid two integers
* Return: the div
*/
int op_div(int a, int b)
{
if (!b)
{
puts("Error");
exit(100);
}
return (a / b);
}
/**
* op_mod - moduls two integers
* @a: input
* @b: input
* Description: op_mod modlus two integers
* Return: the div
*/
int op_mod(int a, int b)
{
if (!b)
{
puts("Error");
exit(100);
}
return (a % b);
}
