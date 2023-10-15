/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:43:02 by abouramt          #+#    #+#             */
/*   Updated: 2023/09/28 12:01:16 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    return s1[i] - s2[i];
}

void ft_swap(char *argv[], int argc)
{
    int i = 1;
    while (i < argc - 1)
    {
        int j = 1;
        while (j < argc - i)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                char *tmp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    int i = 1;
    ft_swap(argv, argc);

    while (i < argc)
    {
        char *arg = argv[i];
        while (*arg)
        {
            write(1, arg, 1);
            arg++;
        }
        write(1, "\n", 1);
        i++;
    }

    return 0;
}
