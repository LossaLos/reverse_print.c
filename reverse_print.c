#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
void    reverse_print(char *str)
{
    int i = ft_strlen(str);

    while(i != 0)
    {
        printf("%c", str[i - 1]);
        i--;
    }
}
int main (int argc, char **argv)
{
    if(argc != 2)
    {
        printf("\n");
        return(0);
    }
    (void)argc;
    reverse_print(argv[1]);
}