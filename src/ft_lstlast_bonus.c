/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regea-go <regea-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 03:45:05 by regea-go          #+#    #+#             */
/*   Updated: 2023/09/09 18:48:27 by regea-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*itr;

	itr = lst;
	if (lst == 0)
		return (0);
	while (itr->next != 0)
		itr = itr->next;
	return (itr);
}
