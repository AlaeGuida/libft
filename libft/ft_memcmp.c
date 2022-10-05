/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguida <aguida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:10:30 by aguida            #+#    #+#             */
/*   Updated: 2022/10/03 11:49:25 by aguida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t length)
{
    char *s1 = str1;  
    char *s2 = str2;  

    if (str1 == str2)  
    {  
        return 0;  
    }  
    while (length > 0)  
    {  
        if (*s1 > *s2)
        {
            return 1;  
        }
        else if (*s1 < *s2)
        {
            return -1;
        }
        
        length--;  
        s1++;  
        s2++;  
    }  
return 0;  
} 
/*
#include <stdio.h>  
#include <string.h>  
int main ()  
{  
int result = 0;  
int ary1[] = {5,5,7,12};  
int ary2[] = {5,5,7,12};  
result = ft_memcmp(ary1, ary2,1300);  
if(result > 0)  
{  
printf("The size of ary1 is more than the size of ary2");  
}  
else if(result < 0)  
{  
printf("The size of ary1 is less than the size of ary2");  
}  
else  
{  
printf("The size of ary1 is equal to the size of ary2");  
}  
return 0;  
}  */