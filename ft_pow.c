/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:40:22 by tferrieu          #+#    #+#             */
/*   Updated: 2019/04/10 18:52:09 by tferrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int			ft_pow(int nb, int pow)
{
	int				i;
	long long int	n;

	n = 1;
	i = 0;
	while (i++ < pow)
		n *= nb;
	return (n);
}

unsigned long long int	ft_pow_u(int nb, int pow)
{
	int						i;
	unsigned long long int	n;

	n = 1;
	i = 0;
	while (i++ < pow)
		n *= nb;
	return (n);
}
