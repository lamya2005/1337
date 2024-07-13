/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:10:14 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/11 17:35:34 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return(len);
}
int main ()
{
	char *a ="lamya";
		printf("%d",ft_strlen(a));
}
