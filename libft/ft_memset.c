/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:42:39 by aguida            #+#    #+#             */
/*   Updated: 2022/10/03 11:50:03 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t length)
{
    size_t i;

    i = 0;
    while(i < length)
    {
        *((char *)str + i)= c;
        i++;
    }
    return(str);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("%s\n", str);
  
    ft_memset(str, 'A', 5);
  
    printf("%s", str);
    return 0;
}*/