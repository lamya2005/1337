/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:20:21 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/10 21:10:02 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int A(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
			return (1);
		i++;
	}
	return (0);
}
