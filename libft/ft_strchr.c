/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:56:34 by aguida            #+#    #+#             */
/*   Updated: 2022/10/10 10:35:57 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (char *)str + i;
		}
		i++;
	}
	if (str[i] == c){
		return (char *)str + i;
	}
	return 0;
}
/*
#include <stdio.h>
#include <string.h>

int main (){

   const char s[] = "Hello 1337"; 
   const char c = 'o'; 
   char *str;
   str = ft_strchr(s, c);
   printf("str starting from '%c': %s", c, str);
   return (0);
}
*/