/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:34:34 by abouramt          #+#    #+#             */
/*   Updated: 2023/09/26 15:16:51 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		while (i <= power)
		{
			res *= nb;
			i++;
		}
	}
	return (res);
}
/*
int main()
{
	int a = 3;
	int power = 3;

	printf("%d",ft_iterative_power(a,power));
}
*/
