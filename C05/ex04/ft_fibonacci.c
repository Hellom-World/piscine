/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:06:35 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/30 16:18:57 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{	
	int	i;

	i = index;
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}

/*int	main (void)
{
	printf("%d", ft_fibonacci(4));
}*/
