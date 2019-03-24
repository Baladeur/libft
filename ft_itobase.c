/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 15:38:19 by tferrieu          #+#    #+#             */
/*   Updated: 2019/03/24 16:59:38 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itobase(unsigned long long int n, char *base)
{
	unsigned long long int	tmp;
	int						len_base;
	int						len_nb;
	int						k;
	char					*nb;

	len_base = ft_strlen(base);
	len_nb = 1;
	tmp = n;
	while (tmp >= (unsigned long long int)len_base && (tmp = tmp / len_base))
		len_nb++;
	if (!(nb = ft_strnew(len_nb)))
		return (NULL);
	tmp = n;
	k = len_nb - 1;
	while (tmp > 0)
	{
		nb[k] = base[tmp % len_base];
		tmp /= len_base;
		k--;
	}
	if (n == 0)
		nb[0] = '0';
	return (nb);
}
