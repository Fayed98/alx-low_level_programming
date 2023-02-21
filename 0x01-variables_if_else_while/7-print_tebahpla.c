#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print numbers os base 10 using putchar'
  *Return: Always 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
