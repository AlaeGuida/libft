/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:06 by aguida            #+#    #+#             */
/*   Updated: 2022/10/07 15:54:37 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    void *str;
    
    str = malloc(size * count);

    if (str == 0){
        return (NULL);
    }   
    str = ft_memset(str, 0, count * size);
    return (str);
}
#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char *str = (char*)ft_calloc(3,1);
    printf("%d", *str);
    
    return(0);
}