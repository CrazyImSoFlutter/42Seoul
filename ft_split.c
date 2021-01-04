/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 10:59:40 by hnoh              #+#    #+#             */
/*   Updated: 2021/01/04 11:10:18 by hnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	if (s[0] && s[0] != c)
		count++;
	i = 0;
	while (i < (int)ft_strlen(s))
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}
	return (count);
}

static char		*ft_segment(char const *s, char c, int i)
{
	int		j;
	int		k;
	char	*strings;

	j = i;
	while (s[i] && s[i] != c)
		i++;
	strings = (char *)malloc(sizeof(char) * ((i - j) + 1));
	if (!strings)
		return (NULL);
	k = 0;
	while (j != i)
	{
		strings[k] = s[j];
		k++;
		j++;
	}
	strings[k] = '\0';
	return (strings);
}

char			**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i <= (int)ft_strlen(s) && ft_word_count(s, c))
	{
		if (ft_strlen(ft_segment(s, c, i)))
		{
			array[j] = ft_segment(s, c, i);
			i += (ft_strlen(array[j]) + 1);
			j++;
		}
		else
			i++;
	}
	array[j] = NULL;
	return (array);
}
