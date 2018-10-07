int		ft_get_num(char c)
{
	int		i;
	char	*base_16;

	i = 0;
	base_16 = "0123456789ABCDEF\0";
	if (c >= 'a' && 'z' >= c)
		c = c - 32;
	while (base_16[i])
	{
		if (c == base_16[i])
			return (i);
		i++;
	}
	return (0);
}

int		ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_power(int s, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < power)
	{
		res = res * s;
		i++;
	}
	return (res);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int s;
	int res;
	int buf;

	s = 0;
	res = 0;
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		buf = ft_get_num(str[i]);
		res = res + (buf * ft_power(str_base, s));
		i--;
		s++;
	}
	return (res);
}
