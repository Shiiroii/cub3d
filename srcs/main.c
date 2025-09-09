/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:27 by liulm             #+#    #+#             */
/*   Updated: 2025/09/09 16:23:34 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	initialize_structs(t_game *game)
{
	*game = (t_game){0};
	game->mlxptr = NULL;
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc == 2)
	{
		initialize_structs(&game);
		if (open_map(argv[1], &game))
		{
			initialize_game(&game); // tout ce qui est mlx
			start_game(&game);
			mlx_loop(game.mlxptr);
		}
	}
	else
		error_msg(1);
	exit_program(&game);
	return (0);
}
