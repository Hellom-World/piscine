/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:31:43 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 18:17:23 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - ('a' - 'A');
			i++;
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	frase[] = "asdsdafA DSA dds314";

	printf("%s", ft_strupcase(frase));
}*/
