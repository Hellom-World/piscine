/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:29:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 17:06:03 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	arr;

	i = 0;
	while (str[i] != '\0')
	{	
		arr = str[i];
		if (arr >= ' ' && arr <= '~' )
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
	char	frase[] = "\b";
	
	printf("%d", ft_str_is_printable(frase));
}*/
