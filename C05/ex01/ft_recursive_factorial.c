/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:12:54 by abouramt          #+#    #+#             */
/*   Updated: 2023/09/26 14:33:06 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		tm;

	tm = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (tm);
	tm = nb * ft_recursive_factorial(nb - 1);
	return (tm);
}
/*
int main()
{
	int a = 5;
	printf("%d",ft_recursive_factorial(a));
}
*/
