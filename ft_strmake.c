/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmake.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 19:24:41 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/24 19:37:31 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmake(char c, size_t size)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(size + sizeof(char));
	while (i < (int)size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
