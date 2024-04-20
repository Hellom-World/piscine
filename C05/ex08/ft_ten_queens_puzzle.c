/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:44:08 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/30 19:02:49 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nc)
{
	int	vl;
	int	div;

	vl = 1;
	div = 0;
	if (nc <= 1)
		return (0);
	while (vl <= (nc + 1) / 2)
	{
		if (nc % vl == 0)
		{
			div++;
		}
		vl++;
	}
	if (div == 1)
		return (nc);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	int	vl;
	int	div;

	vl = 1;
	div = 0;
	if (nb <= 1)
		return (0);
	while (vl <= (nb + 1) / 2)
	{
		if (nb % vl == 0)
		{
			div++;
		}
		vl++;
	}
	if (div == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 1)
		{
			nb++;
		}
		return (nb);
	}
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(997));
	printf("%d\n", ft_find_next_prime(998));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	return (0);
}*/
