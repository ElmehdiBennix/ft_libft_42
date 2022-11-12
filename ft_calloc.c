/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 22:10:49 by ebennix           #+#    #+#             */
/*   Updated: 2022/11/07 20:53:50 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t size)
{
	void	*p;

	p = (char *)malloc ((nelem * size) * sizeof(char));
	if (!p)
		return (0);
	ft_bzero(p, (nelem * size));
	return (p);
}
