#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_digit - Check if a string contains only digits
 * @str: The string to check
 *
 * Return: true if the string contains only digits, false otherwise
 */
bool is_digit(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false; // If a non-digit character is found, return false
        }
    }
    return true; // Return true if all characters are digits
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    for (int i = 1; i < argc; i++) {
        if (is_digit(argv[i])) {
            sum += atoi(argv[i]); // Add the integer value of the argument to the sum
        } else {
            printf("Error\n"); // Print an error message if a non-digit argument is encountered
            return 1; // Return 1 to indicate an error
        }
    }

    printf("%d\n", sum); // Print the final sum
    return 0; // Return 0 to indicate success
}
