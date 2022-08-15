/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 12:47:03 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/10 16:47:48 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != 0)
		len++;
	return (len);
}

//#include <stdio.h>
//int	main()
//{
//	char *str = "ola";
//	printf("len of \'%s\' = %i\n", str, ft_strlen(str));
//
//	str = "o\n";
//	printf("len of \'%s\' = %i\n", str, ft_strlen(str));
//	
//	str = "\n";
//	printf("len of \'%s\' = %i\n", str, ft_strlen(str));
//	
//	str = "";
//	printf("len of \'%s\' = %i\n", str, ft_strlen(str));
//}
