/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:17:23 by tferrieu          #+#    #+#             */
/*   Updated: 2019/04/05 18:40:38 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int			ft_abs(int nb)
{
	if (nb >= 0)
		return ((unsigned int)nb);
	else
		return ((unsigned int)(-1 * nb));
}

unsigned long int		ft_abs_l(long int nb)
{
	if (nb >= 0)
		return ((unsigned long int)nb);
	else
		return ((unsigned long int)(-1 * nb));
}

unsigned long long int	ft_abs_ll(long long int nb)
{
	if (nb >= 0)
		return ((unsigned long long int)nb);
	else
		return ((unsigned long long int)(-1 * nb));
}
