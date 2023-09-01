#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Error\n"); // Print an error message if the number of arguments is not 3
        return 1; // Return 1 to indicate an error
    }

    int num1 = atoi(argv[1]); // Convert the first argument to an integer
    int num2 = atoi(argv[2]); // Convert the second argument to an integer

    printf("%d\n", num1 * num2); // Print the result of the multiplication
    return 0; // Return 0 to indicate success
}
