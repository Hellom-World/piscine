/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:06:07 by heolivei          #+#    #+#             */
/*   Updated: 2022/08/02 13:18:04 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*arr_vl1;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	arr_vl1 = malloc(sizeof(*arr_vl1) * len);
	if (!arr_vl1)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr_vl1[i] = min;
		min++;
		i++;
	}
	*range = arr_vl1;
	return (len);
}

/*int	main(void)
{
	int	*values;
	int	min;
	int	max;
	int	size;
	int	i;

	i = 0;
	min = 1;
	max = 5;
	
	size = ft_ultimate_range(&values, min, max);
	
	if (size == 0)
	{
		printf("NULL!");
	}

	while(i < size)
	{
		printf("%i", min);
		i++;
		min++;
	}
}*/
