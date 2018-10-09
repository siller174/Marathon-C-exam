#include <stdio.h>

int	is_power_2(unsigned int a)
{
	if ((a & (-1 * a)) == a)
		return (1);
	else
		return (0);
}

int		main()
{
	printf("%d", is_power_2(118));
	return (0);
}