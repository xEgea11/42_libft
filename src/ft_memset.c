/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:09:09 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:57:56 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It fills a byte string with "len" length with a byte value
 * 
 * @param b 
 * @param c 
 * @param len 
 * @return void* 
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	idx;

	idx = 0;
	while (len > 0)
	{
		((unsigned char *)b)[idx] = c;
		idx++;
		len--;
	}
	return (b);
}
