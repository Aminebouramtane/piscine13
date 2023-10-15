#include <stdio.h>

int is_prime(int nb)
{
    int i;

    i = 2;
    if (i <= 1)
    {
        return (0);
    }
    while (i <= nb / i)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{
    if (nb < 2)
    {
        return (2);
    }
    while (nb >= 2)
    {
        if (is_prime(nb) == 1)
        {
            return (nb);
        }
        nb++;
    }
    return (0);
}

int main()
{
    int a = 6 ;
    printf("%d",ft_find_next_prime(a));
}