/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:53:29 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/24 15:01:51 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*range;
	int	i;

	i = 0;
	if (max <= min)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*#include <stdio.h>
int main()
{
	int *t;
	t = ft_range(7, 12);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n",t[i]);
		i++;
	}
}*/
