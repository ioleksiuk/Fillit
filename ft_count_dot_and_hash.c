/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_dot_and_hash.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:27:51 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 17:19:27 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count_dot_and_hash(char *s, int l)
{
	int d;
	int h;

	d = 0;
	h = 0;
	while (l-- > 0)
	{
		if (*s == '.')
			d++;
		if (*s == '#')
			h++;
		if (*s != '#' && *s != '.' && *s != '\n')
			ft_error();
		s++;
	}
	if (h % 4 != 0)
		ft_error();
	if (d % 12 != 0)
		ft_error();
	return (0);
}