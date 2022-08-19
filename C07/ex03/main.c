/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/18/2022 12:09:28                      #+#    #+#             */
/*   Updated: 2022/08/18 19:06:55 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main ()
{
	char **strs;
	strs = (char **) malloc(sizeof(strs) * 3);

	char sep[] = "teste";
	strs[0] = "s1";
	strs[1] = "s22";
	strs[2] = "s333";
	char *res = ft_strjoin(3, strs, sep);
	printf("%p: %s\n", res, res);
	free(strs);
}

