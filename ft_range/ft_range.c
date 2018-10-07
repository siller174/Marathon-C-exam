/*
It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.
*/

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i < 10)
	{
		ft_putchar(i + '0');
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int     *ft_range(int start, int end)
{
	int *res;
	int i;

	i = 0;
	if (end < 0 && start == 0)
	{
		start = start * -1;
		res = (int*) malloc(sizeof(res) * (start + 1));
		start = start * -1;
		while (start >= end)
		{
			res[i] = start;
			ft_putnbr(start);
			start--;
		}
	}
	else
	{
		res = (int*) malloc(sizeof(res) * (end - start + 1));
		while (start <= end)
		{
			res[i] = start;
			ft_putnbr(start);
			start++;
		}
		
	}
	return (res);
}