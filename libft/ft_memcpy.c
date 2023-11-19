/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 20:20:30 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/22 20:31:45 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	int			i;

	if (!dest && !src)
		return (0);
	d = dest;
	s = src;
	i = 0;
	while (n > 0)
	{
		((unsigned char *)d)[i] = ((unsigned char *)s)[i];
		n--;
		i++;
	}
	return (d);
}
