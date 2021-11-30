/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:08:26 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/24 14:51:14 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb % 2)
		i = 1;
	else
		i = 2;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i += 2;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
    printf("%d", ft_sqrt(-5));
}*/
