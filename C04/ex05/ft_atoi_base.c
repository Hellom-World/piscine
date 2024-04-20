/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:54:44 by heolivei          #+#    #+#             */
/*   Updated: 2022/07/27 14:48:10 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	rsp;
	int	sign;

	i = 0;
	rsp = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\v'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	j = 0;
	while (str[i + j] >= '0' && str[i + j] <= '9')
	{
		rsp = (rsp * 10) + str[i + j] - '0';
		j++;
	}
	return (sign * rsp);
}

/*int	main(void)
{
	char frase[] = "       ---+--+1234890ab567";

	printf("%d", ft_atoi(frase));
}*/
