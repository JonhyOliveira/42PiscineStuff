/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/18/2022 11:39:39                      #+#    #+#             */
/*   Updated: 2022/08/18 11:56:50 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max);

# include <stdio.h>
int	range_size(int min, int max);
//{
//	return (max - min);
//}

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
	int end = 25;

	int *list = ft_range(start, end);
	int	size = range_size(start, end);
	print_int_list(list, size);
}
