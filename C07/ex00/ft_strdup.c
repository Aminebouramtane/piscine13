/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 21:12:07 by abouramt          #+#    #+#             */
/*   Updated: 2023/10/01 13:20:59 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	while (src[i])
	{
		i++;
	}
	tab = (char *) malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
/*
int main()
{
	char r[] = "amine";
	printf("%s", ft_strdup(r));
}
*/
