/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:53:34 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/23 18:01:57 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char	*base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	ft_check_base(int	len, char *base)
{
	int	i;
	int	j;

	len = ft_strlen(base);
	i = 0;
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int				len;
	unsigned int	nbr_p;
	char			chr;

	len = ft_strlen(base);
	if (ft_check_base(len, base) == 0)
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	nbr_p = nbr;
	chr = base[nbr_p % len];
	if (nbr_p >= 10)
		ft_putnbr_base((nbr_p / len), base);
	write(1, &chr, 1);
}
int	main(void)
{
	ft_putnbr_base("-2147483648", "0123456789");
}
