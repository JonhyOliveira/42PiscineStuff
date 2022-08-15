/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:44:35 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/08 21:41:58 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char c)
{
	write(1, &c, 1);
}

void	write_str(char *str)
{
	while (*str != '\0')
	{
		write_char(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{	
	char	to_write;

	if (nb == -2147483648)
	{
		write_str("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb <= 9)
		{
			to_write = nb + '0';
			write_char(to_write);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
