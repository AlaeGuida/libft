/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:36:34 by aguida            #+#    #+#             */
/*   Updated: 2022/10/20 10:39:15 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*allocate(char *str, long i, int len, int sign)
{
	if (i != 0)
		str = malloc(sizeof(char) * (len + 1));
	else
		return (str = ft_strdup("0"));
	if (!str)
		return (0);
	sign = 0;
	if (i < 0)
	{
		sign++;
		i = -i;
	}
	str[len] = '\0';
	while (--len)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	else
		str[0] = (i % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	i;
	int		sign;

	i = n;
	len = length(i);
	str = 0;
	sign = 0;
	str = allocate(str, i, len, sign);
	if (!str)
		return (0);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1337));
	printf("%s\n", ft_itoa(-1337));
}*/