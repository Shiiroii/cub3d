/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cubd3d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:29:36 by jlaine-b          #+#    #+#             */
/*   Updated: 2025/09/09 16:38:18 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubd3d.h"

void	print_cub3d()
{
	void		*id;
	mlx_image_t	*img;

	id = mlx_init(WINDOWX, WINDOWY, "cub3d", true);
	if (id == NULL)
	{
		printf("Error\nid = NULL\n");
		exit(EXIT_FAILURE);
	}
	info = createwindowimage();
	extremum = define_enlargement_and_shift(pos, max);
	drawy(info, pos, max, extremum);
	drawx(info, pos, max, extremum);
	mlx_loop_hook(info.window.id, ft_hook, info.window.id);
	mlx_loop(info.window.id);
	mlx_terminate(info.window.id);
}