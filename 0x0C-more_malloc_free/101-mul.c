#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Check if a character is a digit
 * @c: The character to check
 * Return: 1 if the character is a digit, 0 otherwise
 */
int is_digit(char c) {
return (c >= '0' && c <= '9');
}
/**
 * main - Multiply two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[]) {
if (argc != 3) {
printf("Error\n");
return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];
for (int i = 0; num1[i] != '\0'; i++) {
if (!is_digit(num1[i])) {
printf("Error\n");
return (98);
}
}
for (int i = 0; num2[i] != '\0'; i++) {
if (!is_digit(num2[i])) {
printf("Error\n");
return (98);
}
}
int len1 = 0;
int len2 = 0;
int *result;
int carry = 0;
while (num1[len1])
len1++;
while (num2[len2])
len2++;
result = malloc(sizeof(int) * (len1 + len2));
if (!result) {
printf("Error\n");
return (98);
}
for (int i = 0; i < len1 + len2; i++)
result[i] = 0;
for (int i = len1 - 1; i >= 0; i--) {
carry = 0;
for (int j = len2 - 1; j >= 0; j--) {
int mul = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
result[i + j + 1] = mul % 10;
carry = mul / 10;
}
result[i] += carry;
}
int started = 0;
for (int i = 0; i < len1 + len2; i++) {
if (result[i] != 0)
started = 1;
if (started)
printf("%d", result[i]);
}
if (!started)
printf("0");
printf("\n");
free(result);
return (0);
}
