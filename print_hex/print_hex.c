#include <unistd.h>
#include <stdio.h>

void	get_hex(int n)
{
	char hex[] = "0123456789abcdef";
	write(1, &hex[n], 1);
}

int		char_to_int(char *c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (c[i])
	{
		res = (res * 10) + (c[i] - '0');
		i++;
	}
	return (res);
}

int		ft_lenint(int c)
{
	int i;

	i = 0;
	while (c > 0)
	{
		c = c / 16;
		i++;
	}
	return (i);
}

void	print_hex(int i)
{
	int res[ft_lenint(i)];
	int x;

	x = 0;
	while (i > 0)
	{
		res[x] = (i % 16);
		i = i / 16;
		x++;
	}
	x = x - 1;
	while (x > -1)
	{
		get_hex(res[x]);
		x--;
	}
}

int main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	res = char_to_int(argv[1]);
	print_hex(res);
}