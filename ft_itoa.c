/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 12:58:30 by hnoh              #+#    #+#             */
/*   Updated: 2021/01/07 13:05:40 by hnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_convert(char *str, int cnt, int n)
{
	long long	i;

	i = n;
	if (i < n)
	{
		str[0] = '-';
		i *= -1;
	}
	str[cnt] = '\0';
	while (1)
	{
		str[cnt - 1] = i % 10 + '0';
		i = i / 10;
		if (!i)
			break ;
		cnt--;
	}
}

char		*ft_itoa(int n)
{
	char		*str;
	int			cnt;
	int			i;

	i = n;
	cnt = 1;
	if (i < 0)
		cnt = 2;
	while (1)
	{
		if (!(i = i / 10))
			break ;
		cnt++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	ft_convert(str, cnt, n);
	return (str);
}
