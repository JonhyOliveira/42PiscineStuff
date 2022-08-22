/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:17:11 by lclaudio          #+#    #+#             */
/*   Updated: 2022/08/21 23:17:12 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*g_dict_path = "numbers.dict";

void	change_dict(char *new_dict)
{
	g_dict_path = new_dict;
}

int	main(int argc, char **argv)
{
	int		i;
	char	*array;

	if (argc == 3)
		change_dict(argv[1]);
	i = 0;
	while (argv[argc - 1][i] == '0')
		i++;
	array = find_key(g_dict_path, &argv[argc - 1][i]);
	if (checkfirstandzero(array, argv[argc - 1]) == 1)
		return (0);
	write(1, "\n", 1);
	return (0);
}
