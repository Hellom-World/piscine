/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:49:02 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/20 16:03:01 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	c;
	int	id;
	int	aux;

	id = 0;
	c = size / 2;
	while (id < c)
	{	
		aux = tab[id];
		tab[id] = tab[size - 1];
		tab[size - 1] = aux;
		id++;
		size--;
	}
}

/*int	main(void)
{
	int	string[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	int	idm = 0;
	int	idm2 = 0;
	while(idm < 13)
        {
                if(string[idm] != '\0')
                {
                       printf("%d ", string[idm]);
                }
                idm++;
        }

	printf("\n");
	ft_rev_int_tab(string, 13);
	
	while(idm2 < 13)
	{	
		if(string[idm2] != '\0')
		{
			printf("%d ", string[idm2]);
		}
		idm2++;
	}
}*/
