/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:36:58 by made-alm          #+#    #+#             */
/*   Updated: 2023/10/30 20:38:29 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx/mlx.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <stdbool.h>

# define COLLECTIBLE	"./sprites/C.xpm"
# define EMPTY	"./sprites/0.xpm"
# define EXIT	"./sprites/E.xpm"
# define PLAYER_RIGHT	"./sprites/P_r.xpm"
# define PLAYER_LEFT	"./sprites/P_l.xpm"
# define PLAYER_EXIT	"./sprites/P_e.xpm"
# define WALL	"./sprites/1.xpm"

# define TILE_SIZE	64

typedef enum keycodes
{
	ESC = 65307,
	W = 119,
	A = 97,
	S = 115,
	D = 100,
}				t_keys;

typedef struct s_game
{
	char	**map_area;
	char	**map_area_floodfill;
	char	*map;
	int		map_fd;
	int		map_y;
	int		map_x;
	int		map_exit;
	int		map_collectable;
	int		map_player;
	int		map_player_y;
	int		map_player_x;
	int		n_movs;
	void	*mlx;
	void	*win;
	void	*exit;
	void	*collectable;
	void	*player_right;
	void	*player_left;
	void	*wall;
	void	*floor;
	void	*exit_miku;
	bool	images;
	bool	window;
	bool	mlx_init;
	bool	array_flood;
	bool	array_map;
}				t_game;

//check_map.c
void	check_ber(char *map);
size_t	line_len(char *line);
void	check_square(char *map);
void	checkmap(char *map);

//check_map2.c
int 	valid_elem(char *line);
void	check_elements(char *map);

//checkargs.c
void	arg_error(char *error_msg);
void    checkargs(int argc, char **argv);

//main.c
int		main(int argc, char **argv);

#endif
