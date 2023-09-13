/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:07:13 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:57:34 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It locates the first occurrence of "c" (converted to unsigned char)
 * 			in a string "s"
 * 
 * @param s 
 * @param c 
 * @param n 
 * @return void* - pointer to the first occurrence
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				idx;

	ptr = (unsigned char *)s;
	idx = 0;
	while (n > 0)
	{
		if (ptr[idx] == (unsigned char)c)
			return ((void *)(ptr + idx));
		idx++;
		n--;
	}
	return (NULL);
}
