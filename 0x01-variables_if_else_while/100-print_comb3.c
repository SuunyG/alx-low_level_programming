#include <stdio.h>

/**
 * main - this code prints all possible combination of 1-9
 * Return: the code returns 0.
 */
int main(void)
{
	int stt, ndd;

	for (stt = 0; stt < 9; stt++)
	{
		for (ndd = stt + 1; ndd < 10; ndd++)
		{
			putchar((stt % 10) + '0');
			putchar((ndd % 10) + '0');
			if (stt == 8 && ndd == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
