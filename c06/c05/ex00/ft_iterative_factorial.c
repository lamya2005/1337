/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:42:44 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/13 15:57:07 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	r;
	r = 1;

	while (nb > 0)
	{
		r = r * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}
