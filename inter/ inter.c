#include <unistd.h>

void		ft_inter(char *str1, char *str2)
{
	int i;
	int j;
	char str_inte[255] = {0};

	i = -1;
	while (str1[++i])
	{
		j = -1;
		while (str2[++j])
			if (str1[i] == str2[j] && !str_inte[+str1[i]])
			{
				str_inte[+str1[i]] = 1;
				write(1, &str1[i], 1);
			}
	}	
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}