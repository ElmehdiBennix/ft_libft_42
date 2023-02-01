/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bennix <bennix@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:11:48 by ebennix           #+#    #+#             */
/*   Updated: 2023/02/01 14:48:53 by bennix           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
typedef struct t_vb
{
	char	**tstr;
	int		i;
	int		j;
	int		k;
} s_vb;

static int	count_word(char const *s, char c)
{
	unsigned int	i ;
	unsigned int	word ;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
			word++;
		}
	}
	return (word);
}

static int	len_word(char const *s, int i, char c)
{
	int	j;

	j = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

static	char **set_data(int size)
{
	char **tab;

	tab = NULL;
	tab = (char **)malloc(size * sizeof(char *));
	if (!tab)
		return (NULL);
	return (tab);
}

static void	ft_clean(char **tstr)
{
	while (*tstr)
	{
		free(*tstr);
		(*tstr)++;
	}
	free(tstr);
}

char	**ft_split(char const *s, char c)
{
	s_vb vb;

	ft_bzero(&vb , sizeof(s_vb));
	if (!s)
		return (NULL);
	vb.tstr = set_data((count_word(s, c) + 1));
	if (!vb.tstr)
		return (NULL);
	while (s[vb.i] != '\0')
	{
		while (s[vb.i] == c)
			vb.i++;
		if (s[vb.i] != '\0')
		{
			vb.k = 0;
			vb.tstr[vb.j] = (char *)malloc((
				len_word(s, vb.i, c) + 1) * sizeof(char));
			if (!vb.tstr)
				return (ft_clean(vb.tstr), NULL);
			while (s[vb.i] != '\0' && s[vb.i] != c)
				vb.tstr[vb.j][vb.k++] = s[vb.i++];
			vb.tstr[vb.j++][vb.k] = '\0';
		}
	}
	return (vb.tstr[vb.j] = NULL, vb.tstr);
}

int main()
{
	char *p = "sdfds dfsd fsdsf";
	char **y = ft_split(p, ' ');
	int i = 0;
	while (1)
	{
		printf("%s\n", y[i]);
		i++;
		if (y[i] == NULL)
		{
			return 0 ;
		}
	}
}