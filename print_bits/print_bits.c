#include <unistd.h>

int main()
{
	char c;
	int dev;

	c = 2;
	dev = 128;
	while (dev > 0)
	{
		if (c & dev)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		dev >>= 1;
	}
}