/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:31:43 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/24 18:51:46 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] = str[i] + ('a' - 'A');
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	frase[] = "asdADASD DSA dds314";

	printf("%s", ft_strlowcase(frase));
}*/
