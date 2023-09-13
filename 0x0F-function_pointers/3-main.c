#include <stdlib.h>
#include "3-calc.h"
#include <unistd.h>
/**
 * _itoa - converts an integer to a string
 * @num: the integer to convert
 * @str: the buffer to store the result
 */
void _itoa(int num, char *str)
{
int i = 0;
char temp;
int isNegative = 0;
if (num == 0)
{
str[i++] = '0';
str[i] = '\0';
return;
}
if (num < 0)
{
isNegative = 1;
num = -num;
}
while (num != 0)
{
int rem = num % 10;
str[i++] = (rem + '0');
num = num / 10;
}
if (isNegative)
str[i++] = '-';
str[i] = '\0';
int start = 0;
int end = i - 1;
while (start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 * Return: 0 on success, 98 on incorrect number of arguments,
 * 99 on invalid operator, 100 on division by zero
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*func)(int, int);
char res_str[11];  // Maximum integer size + sign + null terminator
if (argc != 4)
{
write(STDERR_FILENO, "Error\n", 6);
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!func)
{
write(STDERR_FILENO, "Error\n", 6);
exit(99);
}
result = func(num1, num2);
_itoa(result, res_str);
write(STDOUT_FILENO, res_str, 11);
return (0);
}
