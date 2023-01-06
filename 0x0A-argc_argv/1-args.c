#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc: command line argument count
 * @argv: command line argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
