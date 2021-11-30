/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:55:00 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/23 15:21:26 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	k;

	k = nb - 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (k)
	{
		nb *= k--;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_factorial(7));
}*/
