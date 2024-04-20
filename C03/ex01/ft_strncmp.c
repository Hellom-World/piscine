/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:20:10 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/25 19:51:14 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int   main(void)
{
        char string1[] = "ba";
        char string2[] = "baa";

        if (strncmp(string1, string2, 5) == 0)
                printf("retornou %d = string1 == string2\n"
		, strncmp(string1, string2, 5));
        else if (strncmp(string1, string2, 5) < 0)
                printf("retornou %d = string2 > string1\n"
		, strncmp(string1, string2, 5));
        else
                printf("retornou %d = string1 > string2\n"
		, strncmp(string1, string2, 5));

         char string3[] = "ba";
        char string4[] = "baa";

        if (ft_strncmp(string3, string4, 5) == 0)
                printf("retornou %d = string3 == string4"
		, ft_strncmp(string3, string4, 5));
        else if (ft_strncmp(string3, string4, 5) < 0)
                printf("retornou %d = string4 > string3"
		, ft_strncmp(string3, string4, 5));
        else
                printf("retornou %d = string3 > string4"
		, ft_strncmp(string3, string4, 5));

}*/
