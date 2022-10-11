/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:19:55 by aguida            #+#    #+#             */
/*   Updated: 2022/10/10 18:48:04 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	needle_len;
	char	*hs;

	hs = (char *)haystack;
	needle_len = ft_strlen(needle);
	i = 0;
	
	if (needle_len == 0 && haystack == needle)
	{
		return hs;
	}
	while (hs[i] != '\0' && i < len)
	{
		n = 0;
		while (hs[i + n] != '\0' && needle[n] != '\0' && hs[i + n] == needle[n] && i + n < len)
			n++;
		if (n == needle_len)
		{
			return (hs + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    const char *largestring = NULL;
    const char *smallstring = "1337";

	const char *largestring1 = NULL;
    const char *smallstring1= "1337";

    printf("%s\n", ft_strnstr(largestring, smallstring, 20));
	printf("%s\n", strnstr(largestring1, smallstring1, 20));
}*/