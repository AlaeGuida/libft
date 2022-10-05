/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:58:05 by aguida            #+#    #+#             */
/*   Updated: 2022/10/05 10:14:20 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int				ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while ( n && *str1 && ( *str1 == *str2 ) )
    {
        ++str1;
        ++str2;
        --n;
    }
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return ( *(unsigned char *)str1 - *(unsigned char *)str2 );
    }
}

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[] = "hello";
    char str2[] = "1337";

    printf("%d", strncmp(str, str2, 4));
}
