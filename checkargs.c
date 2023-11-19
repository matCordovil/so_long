/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 13:29:27 by made-alm          #+#    #+#             */
/*   Updated: 2023/10/30 20:08:53 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	arg_error(char *error_msg)
{
	ft_printf("%s", error_msg);
	exit(1);
}

void	checkargs(int argc, char **argv)
{
	if (argc != 2 || !argv || argv[1] == NULL)
		arg_error("Not enough arguments\n");
}
