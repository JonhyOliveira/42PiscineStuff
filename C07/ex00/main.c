/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/18/2022 11:31:49                      #+#    #+#             */
/*   Updated: 2022/08/18 11:38:18 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strdup(char *src);

int	main()
{
	char *dest;

	dest = ft_strdup("Ola =D");
	printf("- %s\n", dest);
	dest = ft_strdup("");
	printf("- %s\n", dest);
	dest = ft_strdup(";_;");
	printf("- %s\n", dest);
}
