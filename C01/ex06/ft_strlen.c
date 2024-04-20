/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:20:21 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/20 12:45:13 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		str++;
		c++;
	}
	return (c);
}

/*int	main(void)
{
	char	string[] = "Hellom Word 42!!";
	int	cont;
	char	*pstring;

	pstring = string;
	
	cont = ft_strlen(pstring);
	printf("existem %d caracteres nessa string", cont);
}*/
