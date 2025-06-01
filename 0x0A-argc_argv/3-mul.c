#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument Vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}

	exit(1);

	for (i = 1; i < argc; i++)
	{
		j *= atoi(argv[i]);
	}

	printf("%d\n", j);

	return (0);
}
