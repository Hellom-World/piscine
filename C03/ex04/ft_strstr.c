/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:52:51 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/26 12:27:12 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{	
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && (str[i + j] == to_find[j])
			&& to_find[j] != '\0')
		{	
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}			
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char frase[] = "Olha que coisa boa";
	char plvr[] = "que";

	printf ("%s\n", strstr(frase, plvr));
	
	char frase2[] = "Olha que coisa boa";
        char plvr2[] = "que";

        printf ("%s", ft_strstr(frase2, plvr2));

}*/
