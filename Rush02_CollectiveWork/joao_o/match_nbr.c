/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/21/2022 16:32:43                      #+#    #+#             */
/*   Updated: 2022/08/21 16:32:53 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// matchs two number strings
int	match_nbr(char *str, char *to_find)
{
	if (!*to_find && (*str < '0' || *str > '9' ))
		return (1);
	else if (!*str)
		return (0);
	if (*str == *to_find)
		return (match_nbr(str + 1, to_find + 1));
	return (0);
}
