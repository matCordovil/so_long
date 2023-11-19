/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:04:44 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/17 21:05:01 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;
	size_t	j;

	src_l = ft_strlen(src);
	if (size == 0)
		return (src_l);
	i = 0;
	dst_l = ft_strlen(dst);
	j = dst_l;
	if (size < j)
		return (size + src_l);
	while (src[i] != '\0' && j < (size - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst_l + src_l);
}
