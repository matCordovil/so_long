/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_cl_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:07:13 by made-alm          #+#    #+#             */
/*   Updated: 2023/10/15 13:56:24 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_map(char *map)
{
	int	map_file;

	map_file = open(map, O_RDONLY);
}

void	close_map(char *map)
{
	close(map_file);
}
