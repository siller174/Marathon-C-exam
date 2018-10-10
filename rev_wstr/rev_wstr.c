#include <unistd.h>

void ft_putnbr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void rev_array(char array[256][4096], int len)
{
	ft_putnbr(array[len--]);
	while (len >= 0)
	{
		write(1, " ", 1);
		ft_putnbr(array[len]);
		len--;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int k;
	int j;
	char res[256][4096];

	i = 0;
	k = 0;
	j = 0;
	while (argv[1][i])
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != ' ' && argv[1][i])
		{
			res[k][j] = argv[1][i];
			j++;
			i++;	
		}
		res[k][j] = '\0';
		j = 0;
		k++;
	}
	rev_array(res, k);
}