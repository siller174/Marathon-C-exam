/*
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i < 10)
	{
		ft_putchar(i + '0');
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int		char_to_int(char *c)
{
	int res;
	int i;
	int neg;

	neg = 1;
	if (c[0] == '-')
		neg = -1;
	i = 0;
	res = 0;
	while (c[i])
	{
		res = (res * 10) + (c[i] - '0');
		i++;
	}
	return (res * neg);
}

int		ft_is_prime(int sum)
{
	int i;

	i = 2;
	while (i < sum)
	{
		if (sum % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int num;
	int sum;

	sum = 0;
	i = 2;
	if (argc == 2)
		num = char_to_int(argv[1]);
	if ((argc != 2) && (num < 0))
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
	{
		while (i <= num)
		{
			if (ft_is_prime(i))
				sum = sum + i;
			i++;
		}
		ft_putnbr(sum);
	}
}
