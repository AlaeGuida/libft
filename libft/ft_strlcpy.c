/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:50:50 by aguida            #+#    #+#             */
/*   Updated: 2022/10/03 18:52:19 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	n;
	unsigned int	lenght;

	lenght = ft_strlen(src);
	n = 0;
	if (size != 0)
	{
		while (src[n] != '\0' && n < size - 1)
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (lenght);
}

#include <stdio.h>

int	main()
{
	char src[] = "1337";
	char dest[] = "Hello";
	printf("length is %zu word is %s", ft_strlcpy(dest, src, 2), dest);
}
