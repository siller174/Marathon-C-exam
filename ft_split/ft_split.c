#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **res;

	i = 0;
	j = 0;
	k = 0;
	if (!(res = (char **) malloc(sizeof(char *) * 256)))
		return (NULL);
	
	while(str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		res[k] = (char *) malloc(sizeof(char) * 4096);
		while (str[i] != ' ' && str[i])
		{
			res[k][j] = str[i];
			i++;
			j++;
		}
		res[k][j] = '\0';
		j = 0;
	
		k++;
	}
	res[k] = NULL;
	return (res);
}

int		main()
{
	char *s = "hello world";
	char **sp = ft_split(s);
	for(int i = 0; i < 2; i++)
	{
		printf("%s ", sp[i]);
	}
}