/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:16:13 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/22 19:43:48 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*x;
	unsigned char	y;

	x = s;
	y = c;
	while (n > 0)
	{
		*x = y;
		n--;
		x++;
	}
	return (s);
}
