/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:59:32 by oouazize          #+#    #+#             */
/*   Updated: 2021/08/26 15:00:48 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int arc, char **arv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < arc)
	{
		while (arv[i][j])
		{
			write(1, &arv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		return (0);
	}
}
