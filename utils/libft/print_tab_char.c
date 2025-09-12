/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:32:07 by jlaine-b          #+#    #+#             */
/*   Updated: 2025/09/12 10:29:08 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<<< HEAD:print_tab.c
void	print_tab(char **text)
========
void	print_tab_char(char **text)
>>>>>>>> e777e6f8ba179820a3d1dca4b606e7f5f59ded4a:print_tab_char.c
{
	int	i;

	i = 0;
	while (text[i] != NULL)
		ft_printf("%s\n", text[i++]);
}
