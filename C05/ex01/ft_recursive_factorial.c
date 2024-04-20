/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 10:42:18 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/30 11:32:10 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{	
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (i);
}

/*int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/
