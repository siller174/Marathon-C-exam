#include <unistd.h>

void	ft_putnbr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[2][i])
	{
		if(argv[1][j] == argv[2][i])
		{
			j++;
		}
		i++;
		if (!argv[1][j])
			ft_putnbr(argv[1]);
	}
	write(1, "\n", 1);
}