/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:08:33 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:57:39 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief It compares byte string s1 against byte string s2
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	int				value;

	idx = 0;
	value = 0;
	while (n > 0)
	{
		if (*((unsigned char *)s1 + idx) != *((unsigned char *)s2 + idx))
		{
			value = *((unsigned char *)s1 + idx) - *((unsigned char *)s2 + idx);
			return (value);
		}
		n--;
		idx++;
	}
	return (0);
}
