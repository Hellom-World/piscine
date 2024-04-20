/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:41:36 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/20 21:49:31 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	id;

	while (size >= 0)
	{	
		id = 0;
		while (id < size - 1)
		{
			if (tab[id] > tab[id + 1])
			{
				swap = tab[id];
				tab[id] = tab[id + 1];
				tab[id + 1] = swap;
			}
			id++;
		}
		size--;
	}
}

/*int	main(void)
{
	int matriz[10] = {10, 7, 3, 8, 5, 6, 2, 4, 9, 1};
	int size = 10;
	int idm = 0;
	int idm2 = 0;
	
	while(idm < size)
        {
                if(matriz[idm] != '\0')
                {
                       printf("%d ", matriz[idm]);
                }
                idm++;
        }

	idm = 0;
	ft_sort_int_tab(matriz, size);
	printf("\n");

	while(idm < size)
        {
                if(matriz[idm] != '\0')
                {
                       printf("%d ", matriz[idm]);
                }
                idm++;
        }


	return (0);
}*/
