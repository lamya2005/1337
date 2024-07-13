/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:01:46 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/09 14:09:58 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;	

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (l < nb && src[l] != '\0')
	{
		dest[i + l] = src [l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}
