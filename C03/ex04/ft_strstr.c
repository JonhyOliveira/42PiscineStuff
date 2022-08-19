/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 22:51:09 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/16 15:09:31 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match_str(char *str, char *to_find)
{
	if (!*to_find)
		return (1);
	else if (!*str)
		return (0);
	if (*str == *to_find)
		return (match_str(str + 1, to_find + 1));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*match;

	match = str;
	if (!*str && *to_find)
		retu
	while (*str)
	{
		if (match_str(str, to_find))
			return (str);
		else
			match = 0;
		str++;
	}
	return (match);
}
