/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:10:11 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 16:25:36 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	arr;

	i = 0;
	while (str[i] != '\0')
	{	
		arr = str[i];
		if (arr >= 'A' && arr <= 'Z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	frase[] = "ASDASDA ";

	printf("%d", ft_str_is_uppercase(frase));
}*/
