/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:08:57 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/24 14:50:42 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_is_prime(2147483647));
}*/
