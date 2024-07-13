/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaraaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:22:38 by lkaraaou          #+#    #+#             */
/*   Updated: 2024/07/10 11:03:01 by lkaraaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[l] == '\0')
		return (str);
	while (str[i])
	{
		l = 0;
		while (str[i + l] == to_find[l] && str[l])
			l++;
		if (to_find[l] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
