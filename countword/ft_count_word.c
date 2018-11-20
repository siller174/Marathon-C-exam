int	ft_count_word(char *str, char *str2)
{
	int i;
	int j;
    int count;
    char *to_find;

	i = 0;
    count = 0;
    to_find = str2;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
		{
            to_find = str2;
            if ((str[i + j] == ' ' || str[i + j] == '\0') && (str[i - 1] == ' ' || i  == 0))
                count++;
            j = 0;
        }
		i++;
	}
	return (count);
}
