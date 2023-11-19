/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:28:13 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/18 15:28:32 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size == 0)
		dest = "";
	else
	{
		while (src[x] != '\0' && x < size - 1)
		{
			dest[x] = src[x];
			x += 1;
		}
		dest[x] = '\0';
	}
	while (src[x] != '\0')
		x++;
	return (x);
}
