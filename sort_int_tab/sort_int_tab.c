#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int     main()
{
	int a[] = {3, 2, 1, 4 ,0};
	sort_int_tab(a, 5);
	for (int i = 0; i < 5; i++)
   		printf("%d \n", a[i]);
}