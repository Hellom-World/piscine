/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:55:53 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/30 18:31:08 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	vl;

	vl = 2;
	if (nb <= 1)
		return (0);
	while (vl <= nb / 2)
	{
		if (nb % vl == 0)
		{
			return (0);
		}
		vl++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(997));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	return (0);
}*/
