#include <unistd.h>
#include <stdio.h>

int		char_to_int(char *c)
{
	int res;
	int i;
	int neg;

	neg = 1;
	if (c[0] == '-')
		neg = -1;
	i = 1;
	res = 0;
	while (c[i])
	{
		res = (res * 10) + (c[i] - '0');
		i++;
	}
	return (res * neg);
}

void	ft_putnbr(int i)
{
	char b;

	if (i < 10)
	{
		b = '0' + i;
		write(1, &b, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int div;
	int f_num;
	int s_num;

	i = 1;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	f_num = char_to_int(argv[1]);
	s_num = char_to_int(argv[2]);
	while (i <= f_num && i <= s_num)
	{
		if ((f_num % i == 0) && (s_num % i == 0))
			div = i;
		i++;
	}
	ft_putnbr(div);
}
