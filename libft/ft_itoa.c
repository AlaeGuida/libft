/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:12:10 by aguida            #+#    #+#             */
/*   Updated: 2022/10/15 19:00:40 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void reverse(char *s)
{
    int i; 
    int j;
    char c;
    
    i = 0;
    j = ft_strlen(s) - 1;
    while (i < j) 
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        i++;
        j--;
    }
}

char	*ft_itoa(int n)
{
    int i;
    int sign;
    char *str;

    i = 0;
    sign = n;
    if(sign < 0)
        n = -n;
    n = n / 10;
    while (n > 0)
        str[i++] = n % 10 + '0';
    if (sign < 0)
        str[i++] = '-';
    str[i] = '\0';
    reverse(str);
}

#include <stdio.h>


int main(){
    int n;
    int m;
    char *s;
    
    n = 1337;
    m = 1337;

    printf("%s\n", ft_itoa(n));
}