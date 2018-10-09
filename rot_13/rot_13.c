#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if ((('a' <= argv[1][i]) && (argv[1][i] <= 'm')) ||
			(('A' <= argv[1][i]) && (argv[1][i] <= 'M')))
			argv[1][i] = argv[1][i] + 13;
		else if ((('n' <= argv[1][i]) && (argv[1][i] <= 'z')) ||
				(('N' <= argv[1][i]) && (argv[1][i] <= 'Z')))
			argv[1][i] = argv[1][i] - 13;
		write(1, &argv[1][i++], 1);
	}
}
