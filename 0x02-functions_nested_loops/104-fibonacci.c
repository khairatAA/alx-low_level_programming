#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int from1, back1, from2, back2;
	unsigned long int st1, st2, st3;

	from1 = 0;
	back1 = 1;
	from2 = 0;
	back2 = 2;
	printf("%lu, %lu, ", back1, back2);
	for (i = 2; i <= 97; i++)
	{
		if ((back1 + back2 > 10000000000) || from2 > 0 || from1 > 0)
		{
			st1 = (back1 + back2) / 10000000000;
			st2 = (back1 + back2) % 10000000000;
			st3 = from1 + from2 + st1;
			from1 = from2, from2 = st3;
			back1 =  back2, back2 = st2;
			printf("%lu%010lu", from2, back2);
		}
		else
		{
			st2 = back1 + back2;
			back1 = back2, back2 = st2;
			printf("%lu", back2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
