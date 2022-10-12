/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:19:55 by aguida            #+#    #+#             */
/*   Updated: 2022/10/12 17:14:08 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*ndl;
	int		needle_len;
	size_t	i;
	long	n;

	hs = (char *)haystack;
	ndl = (char *)needle;
	needle_len = ft_strlen(needle);
	if (ft_strlen(needle) == 0)
		return (hs);
	i = 0;
	n = 0;
	while (i < len)
	{
		if (hs[i] == ndl[n])
			n++;
		else
			n = 0;
		if (needle_len == n)
			return (((hs + i) - n) + 1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *hs = "hello 1337 Med shore martil";
	const char *ndl = "Med";

	const char *hs1 = "hello 1337 Med shore martil";
	const char *ndl1 = "Med";

	printf("%s\n", ft_strnstr(hs, ndl, 50));
	printf("%s\n", strnstr(hs1, ndl1, 50));
}*/