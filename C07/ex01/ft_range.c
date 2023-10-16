/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:22:56 by abouramt          #+#    #+#             */
/*   Updated: 2023/10/01 13:35:38 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *) malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int main()
{
	int i = 0;
	int *tab;
	tab = ft_range(1,10);
	while( i < 9){
		printf("%d", tab[i]);
		i++;
	}
}
*/
