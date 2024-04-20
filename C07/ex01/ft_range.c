/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:48:30 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/02 16:32:15 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{	
	int	*p;
	int	i;
	int	res;

	i = 0;
	res = max - min;
	p = (int *) malloc(sizeof(int ) * res);
	if (min >= max)
	{
		p = 0;
		return (p);
	}
	else
	{	
		while (min < max)
		{	
			p[i] = min;
			min++;
			i++;
		}
	}
	return (p);
}

/*int	main(void)
{	
	int	*len;
	int	min;
	int	i;

	i = 0;
	min = 4;
	len = ft_range(min, 10);
	
	if (len == 0)
	{
		printf("NULL");
	}
	else
	{	
		while(i < 6)
		{
			printf("%d\n", len[i]);
			i++;	
		}
	}
}*/
