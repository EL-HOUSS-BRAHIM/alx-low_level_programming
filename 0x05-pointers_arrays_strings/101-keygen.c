#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 9

/**
 * main - Generates a random password using a given character set.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
srand(time(NULL));
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[PASSWORD_LENGTH + 1];
for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = charset[rand() % (sizeof(charset) - 1)];
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated password: %s\n", password);
return (0);
}
