#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1); // Print the count of arguments excluding the program name
    return 0; // Return 0 to indicate success
}
