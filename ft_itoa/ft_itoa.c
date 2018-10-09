#include <stdio.h>
#include <stdlib.h>

int		ft_int_len(int nbr)
{
	int i;

	i = 0;
	if (nbr < 0)
		i++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_put_max_int(int nbr, char *res)
{
	res[0] = '-';
	res[1] = '2';
	res[2] = '1';
	res[3] = '4';
	res[4] = '7';
	res[5] = '4';
	res[6] = '8';
	res[7] = '3';
	res[8] = '6';
	res[9] = '4';
	res[10] = '8';
	return (res);
}

int		ft_power(int num, int power)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i != power)
	{
		res = res * num;
		i++;
	}
	return (res);
}

char	*ft_itoa(int nbr)
{
	char *res;
	int i;
	int l;

	l = ft_int_len(nbr) - 1;
	i = 0;
	res = (char*)malloc(sizeof(char) * (l + 2));
	if (nbr == -2147483648)
		return (ft_put_max_int(nbr, res));
	if (nbr < 0)
		res[i++] = '-';
	while (l > 0)
	{
		res[i] = ((nbr / (ft_power(10, l))) % 10) + '0';
		l--;
		i++;
	}
	if (l == 0)
		res[i] = nbr % 10 + '0';
	res[++i] = '\0';
	return (res);
}

int		main(void)
{
	printf("%s", ft_itoa(878213));
}
