/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:46:09 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/17 22:08:40 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int num)
{	
	if (num < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*int	main(void)
{
	ft_is_negative(1321);
	ft_is_negative(-1321);
	ft_is_negative(0);
}*/
