/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:01:02 by aguida            #+#    #+#             */
/*   Updated: 2022/10/01 12:08:05 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a'
					&& c <= 'z')))
		return (1);
	else
		return (0);
}