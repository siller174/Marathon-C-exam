#include <stdlib.h>
#include <stdio.h>

int		is_prime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_fprime(int num)
{
	int i;
	int res;

	i = 3;
	if (num % 2 == 0)
		i = 2;
	res = i;
	printf("%d", i++);
	while (num > i)
	{
		if (is_prime(i) && num % i == 0)
		{
			num = num / i;
			printf("*");
			res = res * i;
			printf("%d", i);
			i = 3;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int num;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	i = 0;
	num = atoi(argv[1]);
	if (is_prime(num))
		printf("%d", num);
	else
		ft_fprime(num);
}
