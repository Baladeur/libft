/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:13:35 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/23 21:02:07 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while (i < (int)n)
	{
		*((unsigned char *)dst) = *((unsigned char *)(src + i));
		i++;
		dst++;
	}
	return (dst - i);
}
