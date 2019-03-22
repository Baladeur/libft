/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 15:11:13 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/10 18:37:04 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_dec(long double n)
{
	long double	k;
	int			nb;


	k = n;
	while (k % 1 != 0)

}

void		ft_putfloat(long double n)
{
	if (n < 0.0)
	{
		ft_putchar('-');
		ft_putfloat(-1 * n);
	}
}
