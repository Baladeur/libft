/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:21:12 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/23 21:04:28 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*new;
	unsigned char	*sd;

	new = (unsigned char *)dst;
	sd = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		*new = *(sd + i);
		new++;
		if (*(sd + i) == (unsigned char)c)
			return (new);
		i++;
	}
	return (NULL);
}
