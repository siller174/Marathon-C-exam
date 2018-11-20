int		ft_strlen(char *str);

char	**ft_sortlistlenght(char **list, int size)
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
            if (ft_strlen(result[i]) > ft_strlen(result[j]))
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