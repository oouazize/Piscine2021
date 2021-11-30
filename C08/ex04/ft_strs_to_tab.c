/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 07:43:33 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/26 18:42:58 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*s2;
	int		len;

	i = 0;
	while (src[i])
		i++;
	len = i;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!s2)
		return (0);
	while (src[i])
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

struct	s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*res;
	int			i;

	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < ac && av[i])
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
