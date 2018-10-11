#include <unistd.h>

void ft_union(char *str1, char *str2)
{
	int i;
	int j;
	char as[256] = {0};

	i = -1;
	while (str1[++i])
	{
		j = -1;
		while (str2[++j])
			if (str1[i] == str2[i] && !as[+str1[j]])
			{
				as[+str1[j]] = 1;
				write(1, &str1[j], 1);
			}
	}
	i = -1;
	while (str2[++i])
	{
		j = -1;
		while (str1[++j])
			if (str2[j] == str1[i] && !as[+str2[i]])
			{
				as[+str1[j]] = 1;
				write(1, &str1[j], 1);
			}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);

}
