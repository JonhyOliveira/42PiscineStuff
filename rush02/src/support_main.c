/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:16:48 by lclaudio          #+#    #+#             */
/*   Updated: 2022/08/21 23:16:49 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	hundreds(char hundred, int before)
{
	if (hundred != '0')
	{
		if (before == 1)
		{
			write(1, " ", 1);
		}
		print_nb('0', hundred);
		write(1, " ", 1);
		print_mag(3);
		return (1);
	}
	return (before);
}

int	decimals(char decimal, char unity, int before)
{
	int	sum;

	sum = (decimal - '0') * 10 + (unity - '0');
	if (sum == 0)
		return (before);
	if (sum < 21)
	{
		if (before == 1)
			write(1, " ", 1);
		print_nb(decimal, unity);
		return (1);
	}
	else
	{
		if (before == 1)
			write(1, " ", 1);
		print_nb(decimal, '0');
		if (unity != '0')
		{
			write(1, " ", 1);
			print_nb('0', unity);
		}
		return (1);
	}
	return (before);
}

int	run_numbers(char *array)
{
	int	i;
	int	before;
	int	length;
	int	mag;

	length = ft_strlen(array);
	mag = length - 2;
	i = 0;
	before = 0;
	while (i < length)
	{
		before = hundreds(array[i], before);
		before = decimals(array[i + 1], array[i + 2], before);
		if (mag > 3 && (array[i] != '0'
				|| array[i + 1] != '0' || array[i + 2] != '0'))
		{
			write(1, " ", 1);
			print_mag(mag);
		}
		mag = mag - 3;
		i = i + 3;
	}
	return (before);
}

int	checkdiciomag(char *array)
{
	int i;
	int	length;

	i = 1;
	length = ft_strlen(array);
	while (array != 0 && array[i] == '0' && array[i] != '\0')
	{
		i++;
	}
	if (i == length)
	{
		return (0);
	}
	return (1);
}

int	checkfirstandzero(char *array, char *argv)
{
	int	printed;

	if (array && checkdiciomag(argv) != 0)
	{
		ft_putstr(array);
		free(array);
		write(1, "\n", 1);
		return (1);
	}
	free(array);
	array = correctlength(argv);
	printed = run_numbers(array);
	free(array);
	if (printed == 0)
	{
		array = find_key(g_dict_path, "0");
		ft_putstr(array);
		free(array);
	}
	return (0);
}
