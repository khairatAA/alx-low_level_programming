#include "main.h"
#include <stdlib.h>

/**
 * count_words - count number of words separated by spaces in the string
 * @str: string to be tested
 * Return: the number of words
 */
int count_words(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}

	return (count);
}

/**
 * get_word_lengths - gets the length of all the words in a string
 * @str: string to be tested
 * @words: number of words in the string
 * Return: An array coning the length of each word
 */
int *get_word_lengths(char *str, int words)
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
			while (str[i] != ' ' && str[i] != '\0')
			{
				len++;
				i++;
			}
			sizes[word] = len;
			word++;
		}
		if (str[i] != '\0')
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
	char **words_arr;
	int words, i, j, k, *sizes, cur_word;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	sizes = get_word_lengths(str, words);
	words_arr = malloc((words + 1) * sizeof(char *));
	if (words_arr == NULL)
	{
		free(sizes);
		return (NULL);
	}
	i = 0, j = 0, k = 0;
	while (i < words && str[j] != '\0')
	{
		cur_word = i;
		words_arr[i] = malloc((sizes[i] + 1) * sizeof(char));
		if (words_arr[i] == NULL)
		{
			while (i > 0)
				free(words_arr[--i]);
			free(words_arr);
			free(sizes);
			return (NULL);
		}
		while (str[j] != '\0' && (i == cur_word && str[j] != ' '))
		{
			if (str[j] != ' ')
			{
				words_arr[i][k] = str[j];
				k++;
			}
			if (str[j + 1] == ' ' || str[j + 1] == '\0')
			{
				words_arr[i][k] = '\0';
				i++;
				k = 0;
			}
			j++;
		}
		if (str[j] == ' ')
			j++;
	}
	words_arr[i] = NULL;
	free(sizes);
	return (words_arr);
}
