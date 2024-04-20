/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:16:46 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/19 20:32:13 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	prodiv;
	int	prorest;

	prodiv = a / b;
	*div = prodiv;
	prorest = a % b;
	*mod = prorest;
}

/*int	main(void)
{
	int	vl1;
	int	vl2;
	int	*div;
	int	*mod;

	vl1 = 6;
	vl2 = 1;
	div = &vl1;
	mod = &vl2;
	ft_div_mod(vl1, vl2, div, mod);
	printf("Divisao armazenada: %d\n", vl1);
	printf("Resto armazenada: %d\n", vl2);
	return(0);
}*/
