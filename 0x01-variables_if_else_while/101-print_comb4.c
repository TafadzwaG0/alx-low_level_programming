#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putcher(j + '0');
					putcher(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putcher(' ');
					}
				}
			}
		}
	}
	putcher('\n');
	return (0);
}
