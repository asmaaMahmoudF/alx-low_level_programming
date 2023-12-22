#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
hash_table_t *ht;

ht = hash_table_create(1024);

char *t = calloc(1,sizeof(char));
strcpy(t,"tset");
printf("%p\n", (void *)ht);
return (EXIT_SUCCESS);
}
