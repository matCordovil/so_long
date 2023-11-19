/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:05:36 by made-alm          #+#    #+#             */
/*   Updated: 2023/11/12 14:06:33 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	repeat_elem(char *map)
{
	
	return (0);
}

int valid_elem(char *line)
{
	char	*valid;
	int		i;
	int		j;
	int		flag;

	i = 0;
	valid = "PCE10";
	while (line[i] != '\0' && line[i] != '\n')
	{
		j = 0;
		flag = 0;
		while (valid[j] != '\0')
		{
			if (line[i] == valid[j])
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			return (1);
		i++;
	}
	return (0);
}

void	check_elements(char *map)
{
	int		map_file;
	char	*line;

	map_file = open(map, O_RDONLY);
	while (1)
	{
		line = ft_gnl(map_file);
		if (!line || line == NULL)
			break;
		if (valid_elem(line) == 1)
		{
			free(line);
			close(map_file);
			arg_error("Invalid map elements\n");
		}
		free(line);
	}
	close(map_file);
}
