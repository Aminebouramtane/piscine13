/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:23:54 by abouramt          #+#    #+#             */
/*   Updated: 2023/10/01 20:47:41 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	count_alpha(int size, char **strs, char *sep)
{
	int		i;
	int		lens;
	int		count;

	lens = ft_strlen(sep);
	count = 0 ;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		if (i < size - 1)
			count += lens;
		i++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		count;

	if (size == 0)
		return (malloc(1));
	count = count_alpha(size, strs, sep);
	str = (char *) malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	ft_strcpy(str, strs[i++]);
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

int main()
{
	char *a[] = {"amine"};
	int size = 1;
	char *sep = "-";

	char *res = ft_strjoin(size,a,sep);
	printf("%s", res);
	free(res);
}
