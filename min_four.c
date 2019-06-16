/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_four.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 21:23:30 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/30 18:05:10 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		min_four(int a, int b, int c, int d)
{
	if (a <= b && a <= c && a <= d)
		return (a);
	if (b <= a && b <= c && b <= d)
		return (b);
	if (c <= a && c <= d && c <= b)
		return (c);
	return (d);
}
