#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i;
	int max;

	if (len == 0)
		return (0);
	max = tab[0];
	i = 1;
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int		main()
{
	int array[] = {1, 20, 3, 4, 5, 6};
	int len;

	len = 6;
	printf("%d", max(array, len));

}