/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:25:31 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/12 10:49:52 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int	*tab, int	size)
{
	int	temp;
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			while (tab [a] > tab [b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
	}
}
