#include <stdio.h>
int main()

{
	struct word
	{
		int word_length, word_count, sum, count = 0;
		int i, j;
	}Word_Chain;



	scanf("%d %d", &Word_Chain.word_length, &Word_Chain.word_count);

	char word[Word_Chain.word_count][Word_Chain.word_length];



	for (Word_Chain.i = 0; Word_Chain.i < Word_Chain.word_count; Word_Chain.i++)

	{

		for (Word_Chain.j = 0; Word_Chain.j < Word_Chain.word_length; Word_Chain.j++)

		{

			scanf(" %c", &word[Word_Chain.i][Word_Chain.j]);

		}

	}

	for (Word_Chain.i = 0; Word_Chain.i < Word_Chain.word_count; Word_Chain.i++)

	{

		for (Word_Chain.j = 0; Word_Chain.j < Word_Chain.word_length; Word_Chain.j++)

		{

			if (word[Word_Chain.i][Word_Chain.j] != word[Word_Chain.i + 1][Word_Chain.j])

			{

				Word_Chain.count++;

				if (Word_Chain.count > 2)

				{

					Word_Chain.sum = Word_Chain.i;

					Word_Chain.i = Word_Chain.word_count;

					break;

				}

			}

			else if (Word_Chain.j == Word_Chain.word_length - 2 && Word_Chain.count == 0)
			{

				break;

			}

		}

		Word_Chain.count = 0;

	}

	for (Word_Chain.i = 0; Word_Chain.i < Word_Chain.word_length; Word_Chain.i++)

	{

		printf("%c", word[Word_Chain.sum][Word_Chain.i]);

	}

	return 0;

}