#include <unistd.h>

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

int		ft_atoi(char *str)
{
	int i;
	int res;
	int neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			neg = -1;

	while (str[i])
	{	
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * neg);
}

int		main(int argc, char **argv)
{
	int i;
	int num;

	i = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	num = ft_atoi(argv[1]);
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(num * i);
		write(1, "\n", 1);
		i++;
	}
}