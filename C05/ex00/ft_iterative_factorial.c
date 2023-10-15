/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:44:35 by abouramt          #+#    #+#             */
/*   Updated: 2023/09/26 14:33:41 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	int		tm;

	i = 1;
	tm = 1;
	if (nb == 0)
		return (0);
	while (i <= nb)
	{
		tm *= i;
		i++;
	}
	return (tm);
}
/*
int main()
{
	int a = 5;
	printf("%d",ft_iterative_factorial(a));
}
*/
