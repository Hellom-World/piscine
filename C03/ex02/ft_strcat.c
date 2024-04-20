/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:56:20 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/25 17:33:13 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	ie;

	id = 0;
	ie = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	while (src[ie] != '\0')
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
	char strdest1[20] = "A B C e f";
	char strin1[] = " E F G A B C D";

	strcat(strdest1, strin1);

	printf("str = %s\n", strdest1);

	char strdest2[20] = "A B C e f";
        char strin2[] = " E F G A B C D";

        ft_strcat(strdest2, strin2);

        printf("str = %s", strdest2);

	return (0);
}*/
