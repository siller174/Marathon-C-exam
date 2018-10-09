unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
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
	print_bits(swap_bits(c));

}