/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 22:14:47 by made-alm          #+#    #+#             */
/*   Updated: 2022/12/03 22:14:48 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sections(char const *s, char c)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 1;
	if (!s)
		return (0);
	while (s[j] != '\0')
	{
		if (s[j] != c && flag == 1)
		{
			flag = 0;
			i++;
		}
		else if (s[j] == c)
			flag = 1;
		j++;
	}
	return (i);
}

char	*this_word(char const *s, int start, int stop)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * stop - start + 1);
	if (!word || !s)
		return (NULL);
	i = 0;
	while (start < stop)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**finarray;
	size_t	i;
	size_t	j;
	int		start;

	finarray = (char **)malloc((sections(s, c) + 1) * sizeof(char *));
	if (!finarray || !s)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			finarray[j++] = this_word(s, start, i);
			start = -1;
		}
		i++;
	}
	finarray[j] = 0;
	return (finarray);
}
