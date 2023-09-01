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
    (void)argc; // Unused parameter, suppress compiler warning
    printf("%s\n", argv[0]); // Print the program name
    return 0; // Return 0 to indicate success
}
