/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:57:09 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/24 12:04:02 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int	nb, int power)
{
	if (power < 0)
		return (0);
	if (nb <= 0 && power)
		return (0);
	if ((!nb && !power) || !power)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_recursive_power(3, 3));
}*/
