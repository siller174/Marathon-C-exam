int		ft_strcmp(char *s1, char *s2);

char	**ft_sortlistalphabet(char **list, int size)
{
	int		i;
	int		j;
	char	*temp;
	char	**result;

	result = list;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
            if (ft_strcmp(list[i], list[j]) > 0)
			{
				temp = result[i];
				result[i] = result[j];
				result[j] = temp;
			}
			j++;
		}
		i++;
	}
	return list;
}