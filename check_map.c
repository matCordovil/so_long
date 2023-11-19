/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:03:52 by made-alm          #+#    #+#             */
/*   Updated: 2023/11/12 13:43:47 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_ber(char *map)
{
	int		len;
	char	*lst_four;

	len = ft_strlen(map);
	lst_four = map + len - 4;
	if (ft_strncmp(lst_four, ".ber", 4) != 0)
		arg_error("Invalid map format\n");
}

size_t	line_len(char *line)
{
	if (ft_strchr(line, '\n'))
		return (ft_strlen(line) - 1);
	else
		return (ft_strlen(line));
}

void	check_square(char *map)
{
	size_t		prime_len;
	char		*line;
	int			map_file;

	map_file = open(map, O_RDONLY);
	line = ft_gnl(map_file);
	prime_len = line_len(line);
	free(line);
	while (1)
	{
		line = ft_gnl(map_file);
		if (!line || line == NULL)
			break;
		if (line_len(line) != prime_len)
		{
			free(line);
			close(map_file);
			arg_error("Map must be rectangular\n");
		}
		free(line);
	}
	close(map_file);
}

void	checkmap(char *map)
{
	check_ber(map);
	check_square(map);
	check_elements(map);
}
