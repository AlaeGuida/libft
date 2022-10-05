/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:56:34 by aguida            #+#    #+#             */
/*   Updated: 2022/10/04 13:40:12 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *str, int c){

     int i;
     
     i =0;
     while (*str != '\0')
     {
          if (*str == c)
          {
               return (char *) str;
          }
          str++;
     }
    return NULL;
}
/*
#include <string.h>
#include <stdio.h>

int main (){

   const char s[] = "Hello 1337"; 
   const char c = '1'; 
   char *str;
   str = ft_strchr(s, c);
   printf("str starting from '%c': %s", c, str);
   return 0;
}
*/