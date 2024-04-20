/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:31:43 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 19:33:48 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{	
		if (c == 0 && str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - ('a' - 'A');
			c++;
		}
		else if (c > 0 && str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] = str[i] + ('a' - 'A');
		}
		else if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A'
				|| str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			c = 0;
		else
			c++;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	frase[] = "asdADASD+aSA+dds314 123sdsa";

	printf("%s", ft_strcapitalize(frase));
}*/
