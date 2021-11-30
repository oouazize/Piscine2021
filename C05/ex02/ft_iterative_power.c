/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:55:47 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/25 17:09:29 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int	nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb <= 0 && power)
		return (0);
	if ((!nb && !power) || !power)
		return (1);
	while (nb && power--)
		res *= nb;
	return (res);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_iterative_power(7, -2));
}*/
