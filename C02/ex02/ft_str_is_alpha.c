/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:49:06 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/23 21:58:30 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	arr;

	i = 0;
	while (str[i] != '\0')
	{	
		arr = str[i];
		if ((arr >= 'A' && arr <= 'Z') || (arr >= 'a' && arr <= 'z'))
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
	char	str[] = "644484465dasdas46";

	printf("%d", ft_str_is_alpha(str));
}*/
