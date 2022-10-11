/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:58:49 by aguida            #+#    #+#             */
/*   Updated: 2022/10/08 15:17:18 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	int				i;

	s = (unsigned char *)str;
	i = 0;
	while (n > 0)
	{
		if (s[i] == (unsigned char)c)
		{
			return (s + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main ()
{
    const char *s = "hello 1337";
    unsigned const char c = '1';
   
   printf("%s\n", ft_memchr(s, c, 10));
   
   return (0);
}*/