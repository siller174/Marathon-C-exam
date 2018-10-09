#include "ft.h"

void ft_oper(int f_num, int s_num, char sym)
{
	if (sym == '+')
		printf("%d", f_num + s_num);
	if (sym == '-')
		printf("%d", f_num - s_num);
	if (sym == '/')
		printf("%d", f_num / s_num);
	if (sym == '*')
		printf("%d", f_num * s_num);
	if (sym == '%')
		printf("%d", f_num % s_num);
}

int		main(int argc, char **argv)
{
	int first_num;
	int second_num;
	char sym;

	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	first_num = atoi(argv[1]);
	second_num = atoi(argv[3]);
	sym = argv[2][0];
	ft_oper(first_num, second_num, sym);
}