/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:11:04 by tferrieu          #+#    #+#             */
/*   Updated: 2019/04/09 23:23:01 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *s1, size_t size)
{
	char	*str;
	int		i;

	if (!(str = (char *)malloc(sizeof(char) + size)))
		return (NULL);
	i = 0;
	while (s1[i] && i < (int)size)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (int)size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
