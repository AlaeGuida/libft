/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:57:09 by aguida            #+#    #+#             */
/*   Updated: 2022/10/03 12:28:11 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void * src, size_t length)
{

    char *cpy_src = (char *)src;
    char *cpy_dest = (char *)dest;
    size_t i;

    i = 0;
    if (cpy_dest < cpy_src )
    {
        while(i < length)
        {
            cpy_dest[i] = cpy_src[i];
            i++;
        }
    }
    else if (cpy_dest > cpy_src)
        while(i < length)
        {   
            cpy_dest[length -1] = cpy_src[length -1];
            length--;
        }

    return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char d[20] = "123aaa";
    char d2[20] = "123aaa";
    ft_memmove(d + 3, d, 2);
    memmove(d2 + 3, d2, 2);
    printf("%s\n",d);
    printf("%s\n",d2);
    return 0;
}
*/