#include <stdio.h>

/**
 * main - this code prints all possible combination of 1-9
 * Return: the code returns 0.
 */
int main(void)
{
	int stt, ndd, rdd;

	for (stt = 0; stt < 8; stt++)
	{
		for (ndd = stt + 1; ndd < 9; ndd++)
		{
			for (rdd = ndd + 1; rdd < 10; rdd++)
			{
				putchar((stt % 10) + '0');
				putchar((ndd % 10) + '0');
				putchar((rdd % 10) + '0');
				if (stt == 7 && ndd == 8 && rdd == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
