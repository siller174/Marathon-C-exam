#include <stdio.h>

int     get_num(char c)
{
    int i;
    char *hex;
    
    hex = "0123456789abcdef";
    i = 0;
    while(hex[i] != c && hex[i])
    {
        i++;
    }
    return (i);
}

int     ft_power(int a, int power)
{
    int i;
    int res;

    i = 0;
    res = 1;
    while (i < power)
    {
        res = res * a;
        i++;
    }
    return (res);
}

int     ft_atoi_base(const char *str, int str_base)
{
    int i;
    int neg;
    int res;

    neg = 1;
    i = 0;
    res = 0;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }
    while (str[i])
    {
        res = res + (get_num(str[i]) * ft_power(str_base, i));
        i++;
    }
    return (res * neg);
}

int     main()
{
    printf("%d\n", ft_atoi_base("ff", 16));
}