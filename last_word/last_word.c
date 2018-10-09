#include <unistd.h>

void	last_word(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	i--;
	while (i != 0 && ((str[i] == ' ') || (str[i] == '\t')))
		i--;
	while ((str[i] != ' ') && str[i])
		i--;
	i++;
	while (str[i] && str[i] != ' ')
		write(1, &str[i++], 1);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(argv[1]);
}