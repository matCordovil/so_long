/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:09:09 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/24 20:09:11 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*sa;
	unsigned char		*sb;
	unsigned int		i;

	if (!s1 && !s2)
		return (0);
	i = 0;
	sa = (unsigned char *)s1;
	sb = (unsigned char *)s2;
	while (n > i)
	{
		if (sa[i] != sb[i])
			return (sa[i] - sb[i]);
		i++;
	}
	return (0);
}
