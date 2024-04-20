/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:16:19 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/19 23:42:36 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

/*int     main(void)
{
	int     c;
	int     d;
	int     *a;
	int     *b;

	a = &c;
	b = &d;
	c = 20;
	d = 21;


	ft_ultimate_div_mod(a, b);
	printf("%d\n",c);
	printf("%d\n",d);
	return(0);
}*/
