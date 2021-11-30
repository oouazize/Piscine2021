/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:07:40 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/25 16:29:35 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	*ft_strdup(char	*src)
{
	int		i;
	char	*s2;
	int		len;

	i = 0;
	while (src[i])
		i++;
	len = i;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!s2)
		return (0);
	while (src[i])
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*#include <stdio.h>
int	main()
{
	printf("%s", ft_strdup("Oussama"));
}*/
