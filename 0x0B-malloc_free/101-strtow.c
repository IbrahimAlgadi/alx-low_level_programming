#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * **strtow - Write a function that splits a string into words.
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int i, st_end_idx=0, st_end_size=1, idx=0;
	int *st_end = (int *) malloc(st_end_size * sizeof(int));
	int found_start_word=0, word_count=0, word=0, letters=0, total_letter_count=0;
	char **word_matrix;

	/*printf("%s\n", str);*/

	for(i=0; str[i] != '\0'; i++) {
		/* At the beginning of the word */
		if (str[i] != ' ' && found_start_word == 0) {
			found_start_word = 1;
			/*printf("[%d] Word Start At: %c\n", i,str[i]);*/
			word_count++;
			/* Store Start and End in Variable */
			st_end_size++;
			st_end = (int *) realloc(st_end, st_end_size * sizeof(int));
			st_end[st_end_idx] = i;
			st_end_idx++;
			/* Reallocate Word Mattrix Size */
			/*word_matrix = (char **) realloc(word_matrix, word_count * sizeof(char *));*/
		}
		if (str[i] != ' ') {
			total_letter_count++;
		}
		/* Reached End Of The Word */
		if (str[i] == ' ' && found_start_word == 1) {
			found_start_word = 0;
			/*printf("[%d] Word End At: %c\n", i,str[i-1]);*/
			/* Store Start and End in Variable */
			st_end_size++;
			st_end = (int *) realloc(st_end, st_end_size * sizeof(int));
			st_end[st_end_idx] = i;
			st_end_idx++;
		}
	}

	/*printf("Total Words: %d - Total Letters %d\n", word_count, total_letter_count);*/

	if (word_count == 0)
		return (NULL);

	word_matrix = (char **) malloc(sizeof(char *) * (word_count + 1));

	if (word_matrix == NULL)
		return (NULL);

	word = 0;

	for(i=0; i < st_end_idx; i+=2) {
		/*printf("First Word Size: %d \n", st_end[i+1] - st_end[i]);*/
		/* end of word index - start of word index = word letter count */
		word_matrix[word] = (char *) malloc(((st_end[i+1] - st_end[i])) * sizeof(char));

		if (word_matrix[word] == NULL)
			return (NULL);

		/*printf("Word Start And End Indexes: %d - %d \n", st_end[i], st_end[i+1]);*/
		/* First Word Letter */
		letters = 0;
		for (idx = st_end[i]; idx < st_end[i+1]; idx++) {
			word_matrix[word][letters] = str[idx];
			/*printf("%c", word_matrix[word][letters]);*/
			letters++;
		}
		/* Last Word Terminator Null */
		word_matrix[word][letters] = '\0';

		/*printf("\n");*/
		/* Nex Word */
		word++;
	}

	word_matrix[word] = NULL;

	/*printf("Total Words: %d - Total Letters %d\n", word_count, total_letter_count);*/

	return (word_matrix);
}
