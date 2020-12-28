/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoh <hnoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 12:03:23 by hnoh              #+#    #+#             */
/*   Updated: 2020/12/28 12:16:49 by hnoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>


void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
int			ft_isalpha(int c);
int			ft_isdigit(int c);

#endif
