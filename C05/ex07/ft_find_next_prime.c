/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:09:22 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/24 16:15:25 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (ft_find_next_prime(nb + 1));
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_find_next_prime(0));
}*/
