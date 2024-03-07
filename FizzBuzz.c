#include <stdio.h>

int main(void)
{
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{

			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("FizzBuzz");
	}
}
