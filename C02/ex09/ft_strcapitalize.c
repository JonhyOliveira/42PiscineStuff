/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:19:18 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/14 16:49:14 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_word_prefix(char c)
{
	if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
		return (1);
	return (0);
}

void	str_capitalize_rec(char *str, char prev)
{
	if (*str)
	{
		if (is_word_prefix(prev) && (*str >= 'a' && *str <= 'z'))
			*str -= 32;
		else if (!is_word_prefix(prev) && *str >= 'A' && *str <= 'Z')
			*str += 32;
		str_capitalize_rec(str + 1, *str);
	}
}

char	*ft_strcapitalize(char *str)
{
	str_capitalize_rec(str, 0);
	return (str);
}
