/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:14:00 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/19 11:16:55 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

#include <stdio.h>
int	main()
{
	char str[] = "aloha";
	str[3] = (char) 200;
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen(str));
}
