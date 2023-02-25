/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:06:46 by ebennix           #+#    #+#             */
/*   Updated: 2023/02/23 19:05:34 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*arrow;

	if (*lst == NULL)
		*lst = new;
	else
	{
		arrow = ft_lstlast(*lst);
		arrow -> next = new;
	}
}
