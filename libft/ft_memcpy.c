/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:41:21 by aguida            #+#    #+#             */
/*   Updated: 2022/10/08 15:10:51 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	char	*cpy_src;
	char	*cpy_dest;
	size_t	i;

	cpy_src = (char *)src;
	cpy_dest = (char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	while (i < length)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20];
	char	src[] = "1337";

	char	*result = ft_memcpy(dest, src, 4);
	printf("copied string is %s", result);
}*/