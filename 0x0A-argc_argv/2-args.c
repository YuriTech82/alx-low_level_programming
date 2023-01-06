#include <stdio.h>
#include "main.h"

/**
 * main - prints the arguments passed followed by a newline
 * @argc: command line argument count
 * @argv: command line argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
