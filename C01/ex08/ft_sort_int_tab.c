/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:16:26 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/11 02:19:53 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	*last;
	int	*other;

	last = tab + size - 1;
	while (tab < last)
	{
		other = tab + 1;
		while (other <= last)
		{
			if (*other < *tab)
				ft_swap(other, tab);
			other++;
		}
		tab++;
	}
}
//#include <stdio.h>
//void show_list(int *list, int size)
//{
//	printf("[ ");
//	for (int i = 0; i < size; i++)
//	{
//		if (i > 0)
//			printf(", ");
//
//		printf("%i", *(list + i));
//	}
//
//	printf(" ]");
//}
//
//int main()
//{
//	int list[] = { 5, 3, 4, 10 };
//	
//	show_list(list, 4);
//	ft_sort_int_tab(list, 4);
//	show_list(list, 4);
//
//	int list2[] = { 5, 7, 23, 8, 10 };
//	
//	show_list(list2, 5);
//	ft_sort_int_tab(list2, 5);
//	show_list(list2, 5);
//
//}
