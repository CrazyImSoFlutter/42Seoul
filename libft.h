/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <hnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:03:23 by hnoh              #+#    #+#             */
/*   Updated: 2021/01/03 11:53:47 by hnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int 		ft_isprint(int c);
size_t		ft_strlen(const char *s);
size_t		ft_strlcat(char *dst, const char *src, int size);
size_t		ft_strlcpy(char *dsst, const char *src, int dstsize);

#endif
