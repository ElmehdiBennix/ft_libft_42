/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennix <ebennix@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:11:28 by ebennix           #+#    #+#             */
/*   Updated: 2022/11/10 20:40:09 by ebennix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	first;
	size_t	last;
	char	*st;
	char	*str;

	i = 0;
	st = (char *) set;
	first = 0;
	if (!s1)
		return (NULL);
	last = ft_strlen(s1);
	while (s1[first] != '\0' && setcheck(s1[first], st))
		first++;
	while (last > first && setcheck(s1[last - 1], st))
		last--;
	str = (char *) malloc(sizeof(char) * (last - first + 1));
	if (!str)
		return (NULL);
	while (first < last)
		str[i++] = s1[first++];
	str[i] = '\0';
	return (str);
}
