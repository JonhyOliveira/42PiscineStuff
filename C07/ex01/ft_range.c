/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:39:51 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/18 11:56:30 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

// min included, max excluded
int	range_size(int min, int max)
{
	return (max - min);
}

int	*ft_range(int min, int max)
{	
	int	*list;
	int	*list_it;
	int curr;

	if (min >= max)
		return ((int *) 0);
	list = (int *) malloc(sizeof(int) * range_size(min, max));
	list_it = list;
	curr = min;
	while (curr < max)
	{
		*list_it++ = curr++;
	}
	return (list);
}
//# include <stdio.h>
//int	range_size(int min, int max);
//{
//	return (max - min);
//}
//
//void	print_int_list(int *list, unsigned int size)
//{
//	printf("add: %p [ ", list);
//	for (unsigned int i = 0; i < size; i++)
//	{
//		if (i != 0)
//			printf (", ");
//		printf("%i", list[i]);
//	}
//	printf(" ]");
//}
//
//int	main()
//{
//	int start = 0;
//	int end = 0;
//
//	int *list = ft_range(start, end);
//	int	size = range_size(start, end);
//	print_int_list(list, size);
//}
