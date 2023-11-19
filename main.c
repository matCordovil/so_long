/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:28:27 by made-alm          #+#    #+#             */
/*   Updated: 2023/10/15 13:40:59 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	//t_game	my_game;

	checkargs(argc, argv); //ok
	checkmap(argv[1]);
	/*init_game(&my_game); //ok
	my_game.map = argv[1];
	check_map(&my_game);
	start_game(&my_game);*/
	return (0);
}
