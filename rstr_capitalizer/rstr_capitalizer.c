#include <unistd.h>

char *ft_low_case(char *str)
{
	int i;
	
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32; 
		i++;
	}
	return (str);
}

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

int	main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	argv[1] = ft_low_case(argv[1]);
	while (argv[1][i])
	{
		if ('a' <= argv[1][i] && 'z' >= argv[1][i])
		{
			if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\0')
				argv[1][i] = argv[1][i] - 32;
		}
		i++;
	}
	ft_putnbr(argv[1]);
}