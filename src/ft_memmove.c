/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:08:44 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:57:47 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It copies "len" bytes from src to dst - copy is done in 
 * 			non-destructive manner, overlap is checked
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* 
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((!dst && !src))
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (len == 0 || dst == src)
		return (dst);
	while (len--)
		*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	return (dst);
}
