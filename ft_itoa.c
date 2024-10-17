#include "libft.h"
#include <stdio.h>
static unsigned int ft_intlen(int n)
{
    int i = 0;
    while(n > 9){
        n = n / 10;
        i++; 
    }
    return i + 1;
}
static unsigned int	ft_putnbr(int n, char *new_str,unsigned int i)
{
      if (n == -2147483648) {
        new_str[i++] = '-';
        new_str[i++] = '2';
        n = 147483648;
    }
    if (n < 0) {
        new_str[i++] = '-';
        n *= -1;
    }
    if (n > 9) {
        i = ft_putnbr(n / 10, new_str, i);
    }
    new_str[i++] = (n % 10) + '0'; 
    return i;
}


char *ft_itoa(int n)
{
    char *new_str;

    unsigned int len = ft_intlen(n);
    new_str = malloc(sizeof(char) * len + 1);
    if (!new_str)
        return NULL;
    unsigned int i = 0;
    i = ft_putnbr(n,new_str,i);
    new_str[i] = '\0';
    return new_str;
}
