/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 01:59:24 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 18:04:31 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	idx;
	char	*dest;

	dest = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dest)
		return (0);
	idx = 0;
	while (s[idx] != '\0')
	{
		dest[idx] = (char)f(idx, s[idx]);
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}
