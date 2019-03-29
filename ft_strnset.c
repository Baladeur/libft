/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 19:36:08 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/24 19:40:09 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnset(char *dest, char c, size_t size)
{
	int i;

	i = 0;
	while (dest[i] && i < (int)size)
	{
		dest[i] = c;
		i++;
	}
	return (dest);
}
