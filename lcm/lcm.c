#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int i;

	if (a == 1 || b == 1)
		return (1);
	i = 2;
	while (i <= a && i <= b)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d", lcm(2,2));
}