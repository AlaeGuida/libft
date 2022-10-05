/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:06:22 by aguida            #+#    #+#             */
/*   Updated: 2022/10/04 15:38:19 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int c)
{

    int i;
    
    i = ft_strlen(str) - 1;
    
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            return ((char *)str + i);
        }
        i--;
    }
    return NULL;
}

/*

#include <string.h>
#include <stdio.h>

int main () {
   const char s[] = "1337";
   const char c= '3';
   char *str;

   str = ft_strrchr(s, c);

   printf("str after '%c' is %s\n", c, str);
   
   return(0);
}*/