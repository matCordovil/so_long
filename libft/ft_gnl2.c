/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:39:11 by made-alm          #+#    #+#             */
/*   Updated: 2023/10/19 12:01:00 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_gnl(const char *s, int c)
{
	char	*a;

	if (!s)
		return (0);
	a = (char *)s;
	while (*a)
	{
		if (*a == (char) c)
			return (a);
		a++;
	}
	if (*a == (char) c)
		return (a);
	return (NULL);
}

size_t	ft_strclen(const char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*ft_memmove_mod(char *buff)
{
	size_t	line_len;
	size_t	buff_len;
	size_t	i;

	line_len = ft_strclen(buff, '\n');
	if (!buff[line_len])
	{
		free (buff);
		return (NULL);
	}
	buff_len = ft_strclen(buff, '\0');
	i = -1;
	while (++i < buff_len - line_len)
		buff[i] = buff[line_len + 1 + i];
	buff[i] = '\0';
	return (buff);
}

char	*ft_substr_line(char *buff)
{
	char	*line;
	size_t	line_len;
	size_t	i;

	if (!buff[0])
		return (NULL);
	line_len = ft_strclen(buff, '\n');
	line = (char *)malloc(sizeof(char) * (line_len + 2));
	if (!line)
		return (NULL);
	i = -1;
	while (++i <= line_len)
		line[i] = buff[i];
	line[i] = '\0';
	return (line);
}

char	*ft_strjoin_mod(char *s1, char *s2)
{
	char	*c;
	size_t	len;
	int		i;
	int		j;

	len = ft_strclen(s1, '\0') + ft_strclen(s2, '\0');
	c = (char *) malloc(len * sizeof(char) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	j = -1;
	while (s2[++j])
		c[i + j] = s2[j];
	c[i + j] = '\0';
	free (s1);
	return (c);
}
