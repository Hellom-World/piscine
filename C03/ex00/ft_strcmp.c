/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:28:31 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/25 15:13:21 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{	
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0'))
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
        char string1[] = "abc";
        char string2[] = "abc";

        if (strcmp(string1, string2) == 0)
                printf("retornou %d = string1 == string2\n"
		, strcmp(string1, string2));
        else if (strcmp(string1, string2) < 0)
                printf("retornou %d = string2 > string1\n"
		, strcmp(string1, string2));
        else
                printf("retornou %d = string1 > string2\n"
		, strcmp(string1, string2));

         char string3[] = "abc";
        char string4[] = "abc";

        if (ft_strcmp(string3, string4) == 0)
                printf("retornou %d = string3 == string4"
		, ft_strcmp(string3, string4));
        else if (ft_strcmp(string3, string4) < 0)
                printf("retornou %d = string4 > string3"
		, ft_strcmp(string3, string4));
        else
                printf("retornou %d = string3 > string4"
		, ft_strcmp(string3, string4));

}*/
