#include "main.h"
#include <stdlib.h>

/**
 * count_word: count number of words separated by spaces in the string
 * @str: string to be tested
 * Return: int pointer
 */
int count_word(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		i++;
	}

	return (count);
}

/**
 * words_len - length of all the words in a string
 * @str: string to be tested
 * @words: words in the string
 * Return: a pointer
 */
int *words_len(char *str, int words)
{
	int i, word, len;
	int *sizes;

	sizes = malloc(words * sizeof(int));
		if (sizes == NULL)
			return (NULL);
	i = 0;
	word = 0;
	while (word < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			len++;
			sizes[word] = len;
			word++;
		}
		i++;
	}

	return (sizes);
}

/**
 * strtow - splits a string into words
 * @str: the string to be tested
 * Return: a pointer
 */
char **strtow(char *str)
{
	char **ptr1;
	int words, i, j, k, *sizes, cur_words;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_word(str);
	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	sizes = words_len(str, words);
	ptr1 = malloc((words + 1) * sizeof(char *));
	if (ptr1 == NULL)
		return (NULL);
	i = 0, j = 0, k = 0;
	while (i < words && str[j] != '\0')
	{
		cur_words = i;
		ptr1[i] = malloc(sizes[i] + sizeof(char));
		if (ptr1[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(ptr1[i--]);
			free(ptr1);
			return (NULL);
		}
		while (str[j] != '\0' && i == cur_words)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					ptr1[i][k] = str[j]; j++; k++;
				}
				ptr1[i][k] = '\0'; i++; k = 0;
			}
			j++;
		}
	}
	ptr1[i] = NULL; free(sizes);
	return (ptr1);
}
