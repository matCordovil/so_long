/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:52:44 by made-alm          #+#    #+#             */
/*   Updated: 2022/12/03 21:52:46 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	int		i;
	int		j;
	int		l;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - i;
	while (j > 0 && ft_strchr(set, s1[i + j - 1]))
		j--;
	trimstr = (char *)malloc(sizeof(char) * (j + 1));
	if (!trimstr)
		return (NULL);
	l = 0;
	while (l < j)
	{
		trimstr[l] = s1[i];
		l++;
		i++;
	}
	trimstr[l] = '\0';
	return (trimstr);
}
