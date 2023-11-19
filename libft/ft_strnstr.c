/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:07:52 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/18 17:09:23 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*s;

	i = 0;
	b = (char *)big;
	s = (char *)little;
	if ((!little || !big) && len == 0)
		return (0);
	if (!*little)
		return (b);
	while (b[i] != '\0')
	{
		j = 0;
		while (b[i + j] != '\0' && s[j] != '\0'
			&& b[i + j] == s[j] && len > (i + j))
		{
			if (s[j + 1] == '\0')
				return (&b[i]);
			j++;
		}
		i++;
	}
	return (0);
}
