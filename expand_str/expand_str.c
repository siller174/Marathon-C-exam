#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

void convers_line(char *str)
{
	int i;

	i = 0;
	while (is_space(str[i]))
		i++;
	while (str[i])
	{
		if(is_space(str[i]))
		{
			while(is_space(str[i]))
			{
				i++;
			}
			if (str[i])
				write(1, "   ", 3);
			else
				return ;
		}
		write(1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	convers_line(argv[1]);
	write(1, "\n", 1);
}