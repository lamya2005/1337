/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:28:40 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/11 16:46:09 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main ()
{
	char src  [6]= "lamya";
	char dest  [6];
	printf("%s",ft_strcpy(dest,src));
}
