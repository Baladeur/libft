/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:41:23 by tferrieu          #+#    #+#             */
/*   Updated: 2019/04/04 17:44:44 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getbase(char id)
{
	if (id == 'd' || id == 'D' || id == 'u' || id == 'U' || id == 'i'
			|| id == 'I')
		return (ft_strdup("0123456789"));
	if (id == 'x' || id == 'h')
		return (ft_strdup("0123456789abcdef"));
	if (id == 'X' || id == 'H')
		return (ft_strdup("0123456789ABCDEF"));
	if (id == 'o' || id == 'O')
		return (ft_strdup("01234567"));
	if (id == 'b' || id == 'B')
		return (ft_strdup("01"));
	return (NULL);
}
