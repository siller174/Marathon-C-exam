#include <stdio.h>

int ft_count_word(char *str, char *str2);
int ft_strlen(char *str);

int main(int argc, char **argv)
{
    if (argc < 3)
        return 0;
    printf("%d", count_word(argv[1], argv[2]));
    

}