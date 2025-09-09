/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:21:42 by liulm             #+#    #+#             */
/*   Updated: 2025/09/09 15:47:20 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "../utils/minilibx-linux/mlx.h"
# include "../utils/libft/libft.h"
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

typedef struct s_data
{
	char	*north;
	char	*south;
	char	*eat;
	char	*west;
	int		*floor;
	int		*ceiling;
	char	**map;
	int		len;
	int		large;
}				t_data;

#endif
