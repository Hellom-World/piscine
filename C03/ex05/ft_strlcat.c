/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:01:06 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/26 18:55:00 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <bsd/string.h>
#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	t;
	unsigned int	i;

	t = 0;
	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	while (src[t] != '\0')
	{
		t++;
	}
	dest[i] = '\0';
	return (i + t);
}

/*int	main(void)
{
	char dest[] = "abc";
	char src[] = "";

	printf("%ld\n", strlcat(dest, src, 1));
	printf("%d", ft_strlcat(dest, src, 1));
	return (0);
}*/
