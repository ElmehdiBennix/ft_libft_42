/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcreate_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 05:09:22 by ebennix           #+#    #+#             */
/*   Updated: 2023/02/25 08:32:28 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcreate_back(t_list **lst, void *content)
{
	t_list	*back;

	back = ft_lstnew(content);
	ft_lstadd_back(lst, back);
}
