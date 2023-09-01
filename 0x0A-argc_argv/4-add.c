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
            return false;
        }
    }
    return true;
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
            sum += atoi(argv[i]);
        } else {
            printf("Error\n");
            return (1);
        }
    }

    printf("%d\n", sum);
    return (0);
}
