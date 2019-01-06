/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:53:02 by tferrieu          #+#    #+#             */
/*   Updated: 2018/11/15 17:21:32 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc(size + sizeof(char))))
		return (NULL);
	while (i < (int)(size / sizeof(char)))
	{
		str[i] = '\0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
