/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/18/2022 12:01:15                      #+#    #+#             */
/*   Updated: 2022/08/18 12:08:05 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max);

# include <stdio.h>

void	print_int_list(int *list, unsigned int size)
{
	printf("add: %p [ ", list);
	for (unsigned int i = 0; i < size; i++)
	{
		if (i != 0)
			printf (", ");
		printf("%i", list[i]);
	}
	printf(" ]");
}

int	main()
{
	int start = 0;
	int end = 0;

	int *list; 
	int size = ft_ultimate_range(&list, start, end);
	print_int_list(list, size);
}

