/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:18:35 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/10 21:36:34 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	{
		if (ac > 1)
			while (av[ac - 1][i] != '\0')
			{
				write(1, &av[ac - 1][i], 1);
				i++;
			}
	}
	write (1, "\n", 1);
	return (0);
}
