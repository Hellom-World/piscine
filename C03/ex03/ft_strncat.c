/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:38:14 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/25 18:35:42 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	ie;

	id = 0;
	ie = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	while (src[ie] != '\0' && ie < nb)
	{
		dest[id] = src[ie];
		ie++;
		id++;
	}
	dest[id] = '\0';
	return (dest);
}

/*int	main(void)
{
	char strdest1[20] = "AbC";
	char strin1[] = "abcd";

	strncat(strdest1, strin1, 3);

	printf("str = %s\n", strdest1);

	char strdest2[20] = "AbC";
        char strin2[] = "abcd";

        ft_strncat(strdest2, strin2, 3);

        printf("str = %s", strdest2);

	return (0);
}*/
