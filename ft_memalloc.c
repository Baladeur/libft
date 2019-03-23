/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:42:02 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/23 21:01:47 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;
	int		i;

	i = 0;
	if (!(mem = (void*)malloc(size)))
		return (NULL);
	while (i < (int)size)
	{
		*(char *)(mem + i) = 0;
		i++;
	}
	return (mem);
}
