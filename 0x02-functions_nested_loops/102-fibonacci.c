#include "main.h"
/**
 * main -Entry point
 * Description: prints the first 50 fibonacci numbers
 * starting with 1 and 2 followed by the new line
 * Return: 0 (Success)
*/
int main(void)
{
int count;
unsigned long f1, f2, sum;
for (count = 0; count < 50; count++)
{
sum = f1 + f2;
printf("%lu", sum);
f1 = f2;
f2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
