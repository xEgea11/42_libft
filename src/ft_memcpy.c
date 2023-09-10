/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:08:38 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 10:15:40 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief It copies "n" bytes from "src" to "dst"; if they overlap, 
 * 			behaviour is undefined - in this case, memmove should be used
 * 
 * @param dst 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int	idx;

	if (!dst && !src)
		return (0);
	idx = 0;
	while (n > 0)
	{
		*((char *)dst + idx) = *((char *)src + idx);
		n--;
		idx++;
	}
	return (dst);
}
