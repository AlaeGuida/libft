/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 09:57:09 by aguida            #+#    #+#             */
/*   Updated: 2022/10/06 13:22:54 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char	*cpy_src;
	char	*cpy_dest;
	size_t	i;

	cpy_src = (char *)src;
	cpy_dest = (char *)dest;
	i = 0;
	if (cpy_dest < cpy_src)
	{
		while (i < length)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
	}
	else if (cpy_dest > cpy_src)
	{
		while (i < length)
		{
			cpy_dest[length - 1] = cpy_src[length - 1];
			length--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	d[20]= "123aaa";

    ft_memmove(d + 3, d, 2);
    printf("%s\n",d);
    return (0);
}*/
