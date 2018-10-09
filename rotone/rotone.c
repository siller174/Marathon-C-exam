#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'Z' || argv[1][i] == 'z')
			argv[1][i] = argv[1][i] - 25;
		else if ((('a' <= argv[1][i]) && (argv[1][i] <= 'z')) ||
				(('A' <= argv[1][i]) && (argv[1][i] <= 'Z')))
			argv[1][i] = argv[1][i] + 1;
		write(1, &argv[1][i++], 1);
	}
}
