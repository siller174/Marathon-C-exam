#include <unistd.h>

void	ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);	
		i++;
	}
}

int		count_repear(char c)
{
	int res;
	
	if (('a' <= c) && (c <= 'z'))
	{
		res = c - 'a' + 1;
	}

	if ('A' <= c && c <= 'Z')
	{
		res = c - 'A' + 1;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int i;
	int count;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);		
	}
	i = 0;
	while (argv[1][i])
	{
		count = count_repear(argv[1][i]);
		while (count--)
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
}
