/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_line_in_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine-b <jlaine-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:29:03 by jlaine-b          #+#    #+#             */
/*   Updated: 2025/09/12 10:12:44 by jlaine-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**add_line_in_tab(char **tab, char *line)
{
	int		n;
	int		i;
	char	**new_tab;

	n = tab_size(tab);
	new_tab = malloc(sizeof(char *) * (n + 2));
	i = 0;
	while (tab[i] != NULL)
	{
		new_tab[i] = ft_strdup(tab[i]);
		i++;
	}
	new_tab[i++] = line;
	new_tab[i] = NULL;
	free_tab((void **)tab);
	return (new_tab);
}
