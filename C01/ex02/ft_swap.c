/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:31:08 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/19 17:56:56 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 4;
	b = 2;
	
	printf("antes a:%i\n",a);
        printf("antes b:%i\n",b);

	ft_swap(&a, &b);

	printf("depois a:%i\n",a);
	printf("depois b:%i\n",b);
}*/
