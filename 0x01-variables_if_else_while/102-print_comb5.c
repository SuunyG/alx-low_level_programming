#include <stdio.h>

/**
 * main - this code prints all possible two combination btw 0 - 99
 * Return: the code returns 0.
 */
int main(void)
{
	int stt, ndd;

	for (stt = 0; stt <= 98; stt++)
	{
		for (ndd = stt + 1; ndd <= 99; ndd++)
		{
			putchar((stt / 10) + '0');	
			putchar((stt % 10) + '0');
			putchar(' ');
			putchar((ndd / 10) + '0');
			putchar((ndd % 10) + '0');
			if (stt == 98 && ndd == 99)
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
