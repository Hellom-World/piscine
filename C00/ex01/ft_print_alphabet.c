/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:58:50 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/17 18:22:01 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	lt;

	lt = 'a';
	while (lt <= 'z')
	{
		ft_putchar(lt);
		lt++;
	}	
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
