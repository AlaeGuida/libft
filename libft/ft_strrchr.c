/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:06:22 by aguida            #+#    #+#             */
/*   Updated: 2022/10/10 11:31:17 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return (char *)str + i;
		i--;
	}
	if (str[i] == c)
		return (char *)str + i;
	return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char s[] = "11111131111";
   const char c= '3';

   printf("str after '%c' is %s\n", c, ft_strrchr(s, c));
   
   return (0);
}*/