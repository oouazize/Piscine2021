/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:28:44 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/18 17:36:44 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int		i;
	char	*tab;

	tab = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar(92);
			write(1, &tab[(unsigned int)str[i] / 16], 1);
			write(1, &tab[(unsigned int)str[i] % 16], 1);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
}
