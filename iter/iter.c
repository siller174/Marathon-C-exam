#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int c;

	i = 0;
	while (argv[1][i])
	{
		c = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
				c++;
			j++;
		}
		if(c == 1)
			write(1, &argv[1][i], 1);
		i++;
	}
}
