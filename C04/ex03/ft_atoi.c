/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:59:17 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/23 14:40:00 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isspace(char *str, int i)
{
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		return (1);
	return (0);
}

int	ft_number(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	val;

	i = 0;
	sign = 1;
	val = 0;
	while (str[i] && ft_isspace (str, i) == 1)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_number(str, i) == 1)
	{
		val = val * 10 + str[i] - '0';
		i++;
	}
	return (sign * val);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "  ----+-+124ab56";
	int val = ft_atoi(str);
	printf("%d", val);
}*/
