#include <stdio.h>

int ft_isalnum(int alnum)
{
    return (alnum >= 48 && alnum <= 57) || (alnum >= 65 && alnum <= 90) || (alnum >= 97 && alnum <= 122);
}

int main()
{
    printf("%d", ft_isalnum('l'));
    return (0);
}