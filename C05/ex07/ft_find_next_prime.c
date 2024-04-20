/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:44:08 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/31 10:45:00 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nc)
{
	int	vl;

	vl = 2;
	while (vl <= nc / 2)
	{
		if (nc % vl == 0)
		{
			return (0);
		}
		vl++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb > 2)
	{	
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(997));
	printf("%d\n", ft_find_next_prime(214748362));
	printf("%d\n", ft_find_next_prime(214748364));
	printf("%d\n", ft_find_next_prime(214748366));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	return (0);
}*/
