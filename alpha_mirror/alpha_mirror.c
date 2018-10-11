#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	char letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if ('A' <= argv[1][i] && 'Z' >= argv[1][i])
				letter = 'Z' - argv[1][i] + 'A';
			if ('a' <= argv[1][i] && 'z' >= argv[1][i])
				letter = 'z' - argv[1][i] + 'a';
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}