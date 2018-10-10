#include <stdio.h>

int		get_num(char c)
{
	int i;
	char *hex;

	if ('A' >= c && 'Z' >= c)
		c = c + 32;
	hex = "0123456789abcdef";
	i = 0;
	while (hex[i] != c && hex[i])
		i++;
	return (i);
}

int		ft_power(int a, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * a;
		i++;
	}
	return (res);
}

int		ft_strlen(const char *string)
{
	int i;

	i = 0;
	while (string[i])
		i++;
	return (i);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int j;
	int neg;
	int res;

	neg = 1;
	i = 0;
	j = ft_strlen(str) - 1;
	res = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (j > -1)
	{
		res = res + (get_num(str[i]) * ft_power(str_base, j));
		j--;
		i++;
	}
	return (res * neg);
}

int		main()
{
	printf("%d\n", ft_atoi_base("fabced", 16));
}
