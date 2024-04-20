/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:51:30 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 15:27:20 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{	
	int	i;
	int	arr;

	i = 0;
	while (str[i] != '\0')
	{	
		arr = str[i];
		if (arr >= '0' && arr <= '9')
		{	
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	char	frase[] = "";

	printf("%d", ft_str_is_numeric(frase));
}*/
