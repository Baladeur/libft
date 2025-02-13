/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:25:14 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/23 21:03:05 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	if (src < dst)
	{
		while (i < (int)len)
		{
			i++;
			dst++;
		}
		while (i > 0)
		{
			i--;
			dst--;
			*(char *)dst = *(char *)(src + i);
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
