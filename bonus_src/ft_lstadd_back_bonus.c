/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 03:43:54 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/13 17:55:50 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*itr;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	itr = ft_lstlast(*lst);
	itr->next = new;
}
