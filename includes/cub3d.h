/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:42 by liulm             #+#    #+#             */
/*   Updated: 2025/09/09 16:09:33 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "MLX42.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/time.h>

// ============================ ASSETS ===============================

# define NORTH 'N'
# define SOUTH 'S'
# define EAST 'E'
# define WEST 'W'
# define FLOOR '0'
# define WALL '1'

// ====== STRUCTURES ====== //

typedef struct	s_data
{
	char	*north;
	char	*south;
	char	*east;
	char	*west;
	int		*floor;
	int		*ceiling;
	char	**map;
	int		len;
	int		large;
}				t_data;

typedef struct	s_game
{

}				t_game;

#endif
