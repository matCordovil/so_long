/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:03:47 by made-alm          #+#    #+#             */
/*   Updated: 2022/11/27 21:03:49 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	nlen;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	nlen = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * nlen + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (ft_strlen(s1))
	{
		nstr[i] = *s1++;
		i++;
	}
	while (ft_strlen(s2))
	{
		nstr[i] = *s2++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
