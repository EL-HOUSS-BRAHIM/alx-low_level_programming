#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && !in_word)
{
count++;
in_word = 1;
}
else if (str[i] == ' ')
{
in_word = 0;
}
}
return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
int word_count;
char **words;
int word_index;
int start;
int i, j;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
word_index = 0;
start = 0;
for (i = 0; str[i] != '\0'; i++)
{
int word_length;
if (str[i] != ' ')
{
start = i;
while (str[i] != ' ' && str[i] != '\0')
{
i++;
}
word_length = i - start;
words[word_index] = malloc((word_length + 1) * sizeof(char));
if (words[word_index] == NULL)
{
for (j = 0; j < word_index; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
strncpy(words[word_index], &str[start], word_length);
words[word_index][word_length] = '\0';
word_index++;
}
}
words[word_index] = NULL;
return (words);
}
