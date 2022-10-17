/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:20:37 by aguida            #+#    #+#             */
/*   Updated: 2022/10/14 12:38:56 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		result = (result * 10) + (str[i++] - '0');
	if (sign == 1)
		return (-result);
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    const char s[] = "-+--+1337";
    
    printf("%d", ft_atoi(s));
}*/