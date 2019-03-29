/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:15:12 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/29 18:20:11 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	biggest_int(int nb, ...)
{
	va_list	ilist;
	int		max;
	int		current;
	int		i;

	va_start(ilist, nb);
	i = 0;
	max = -2147483648;
	while (i < nb)
	{
		current = va_arg(ilist, int);
		max = current > max ? current : max;
		i++;
	}
	return (max);
}
