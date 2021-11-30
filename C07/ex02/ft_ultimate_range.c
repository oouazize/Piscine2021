/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:47:21 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/26 14:54:37 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int	**range, int min, int	max)
{
	int	i;
	int	*tab;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	*range = tab;
	return (i);
}
/*#include <stdio.h>
int main()
{

	int i;
	int *t;
	printf("%d\n", ft_ultimate_range(&t, 7, 12));
	i = 0;
	while (i < 5)
	{
		printf("%d\n", t[i]);
		i++;
	}
}*/
