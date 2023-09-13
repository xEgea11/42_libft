/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:20:46 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 18:04:25 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		idx;
	size_t		len;

	idx = 0;
	len = ft_strlen(src);
	if (src == NULL)
	{
		*dst = '\0';
		return (0);
	}
	if (dstsize == 0)
		return (len);
	while (src[idx] != '\0' && idx < (dstsize - 1))
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (len);
}
