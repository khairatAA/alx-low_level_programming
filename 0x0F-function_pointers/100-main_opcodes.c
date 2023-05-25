#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	unsigned char *arr;

	if (argc == 2)
	{
		number_of_bytes = atoi(argv[1]);
		if (number_of_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		else
		{
			arr = (unsigned char *)main;
			for (i = 0; i < number_of_bytes; i++)
			{
				printf("%02x ", arr[i]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Error\n");
		exit(1);
	}

	return (0);
}
