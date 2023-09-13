/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:06:05 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:55:01 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes "n" zeroed bytes to the string s. If "n" is zero, the function
 * 			does nothing
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	idx;

	ptr = (char *)s;
	idx = 0;
	while (n > 0)
	{
		ptr[idx] = 0;
		n--;
		idx++;
	}
}
