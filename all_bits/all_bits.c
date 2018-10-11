#include <unistd.h>

unsigned char ft_reverse_bit(unsigned char a)
{
	unsigned char b;
	int i;

	i = 8;
	b = 0;
	while (i > 0)
	{
		b = (b * 2) + (a % 2);
		a = a / 2;
		i--;
	}
	return (b);
}

void ft_print_bits(char c)
{
	int dev;

	dev = 128;
	while (dev > 0)
	{
		if (c & dev)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		dev = dev >> 1;	
	}
}

unsigned char ft_swap_bits(unsigned char c)
{
	return (c >> 4 | c << 4);
}

int	main()
{
	char s = 2;
	ft_print_bits(s);
	write(1, "\n", 1);
	ft_print_bits(ft_swap_bits(s));
	write(1,"\n", 1);
	ft_print_bits(ft_reverse_bit(s));
}
