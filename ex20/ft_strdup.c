/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenbrai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 20:08:25 by ybenbrai          #+#    #+#             */
/*   Updated: 2019/02/10 20:12:07 by ybenbrai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	if ((dest = (char *)malloc(ft_strlen(str) + 1)) == NULL)
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
