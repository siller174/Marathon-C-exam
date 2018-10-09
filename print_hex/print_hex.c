#include <unistd.h>
#include <stdio.h>

void print_hex(int n)
{
	char hex[] = "0123456789abcdef";
	write(1, &hex[n], 1);
}

int char_to_int(char *c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (c[i])
	{
		res = (res * 10) + (c[i] - '0');
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	res = char_to_int(argv[1]);
	while (res > 0)
	{
		print_hex(res % 16);
		res = res / 16;
	}
}