/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:13:06 by aguida            #+#    #+#             */
/*   Updated: 2022/10/11 18:50:06 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(size * count);
	if (str == 0)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}
/*
#include <stdio.h>

int main () {

    int size = 8539;
    
    char *str = (char *)ft_calloc(size,sizeof(int));
    char *str1 = (char *)calloc(size,sizeof(int));

    if (ft_memcmp(str, str1, size * sizeof(int)) == 0)
        printf("OK");
    else
        printf("ERROR");
    
    return(0);
}*/