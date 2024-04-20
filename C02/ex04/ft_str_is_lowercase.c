/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:30:18 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 15:52:51 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	arr;

	i = 0;
	while (str[i] != '\0')
	{	
		arr = str[i];
		if (arr >= 'a' && arr <= 'z')
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
	char	frase[] = "olhaquEcoisaboa";
	
	printf("%d", ft_str_is_lowercase(frase));
}*/
