/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:41:21 by aguida            #+#    #+#             */
/*   Updated: 2022/10/02 19:30:26 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t length)
{

    char *cpy_src = (char *)src;
    char *cpy_dest = (char *)dest;
    int i;

    i = 0;
    while(i < length)
    {
        cpy_dest[i] = cpy_src[i];
        i++;
    }
    return dest;
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
char src[] = "1337";
char dest[100];
ft_memcpy(dest, src, strlen(src)+1);
printf("Copied string is %s", dest);
return 0;
}
*/