#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char a;
	int i;

	a = 0;
	i = 8;
	while (i > 0)
	{
		a = a * 2 + octet % 2;
		octet = octet / 2;
		i--;
	}
	return (a);
}

void	print_bits(char c)
{
	int dev;

	dev = 128;
	while (dev > 0)
	{
		if (dev & c)
			printf("1");
		else
			printf("0");
		dev = dev >> 1;
	}
}

int main()
{
	char c = 2;
	print_bits(c);
	printf("\n");
	print_bits(reverse_bits(c));

}