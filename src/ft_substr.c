/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:12:12 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/10 18:18:47 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*ft_allocate(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = NULL;
	if (len > ft_strlen(s) - start)
		substr = malloc(ft_strlen(s) - start + 1);
	else if (ft_strlen(s) <= len)
		substr = malloc(ft_strlen(s) * sizeof(char) + 1);
	else
		substr = malloc(len * sizeof(char) + 1);
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		cntr;

	cntr = 0;
	if (start >= ft_strlen(s))
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	substr = ft_allocate(s, start, len);
	if (!s)
		return (NULL);
	if (!substr)
		return (NULL);
	while (cntr < len && s[start] != '\0')
		substr[cntr++] = s[start++];
	substr[cntr] = '\0';
	return (substr);
}
