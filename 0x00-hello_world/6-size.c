#include <stdio.h>
/**
  *main -Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	char charTyp;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charTyp));
	printf("Size of a int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
