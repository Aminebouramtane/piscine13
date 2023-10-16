/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:37:27 by abouramt          #+#    #+#             */
/*   Updated: 2023/10/01 15:23:11 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *) malloc(sizeof(int) * size);
	if (!(*range))
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

int main()
{
	int 	i;
	int 	*tab;
	// i = 0;
	// while (i < 9)
	// {
	// 	tab[i]=0;
		
	// 	i++;
	// }
	ft_ultimate_range(&tab,1,10);
	i = 0;
	while (i < 9)
	{
		printf("%d",tab[i]);
		i++;
	}		
}

