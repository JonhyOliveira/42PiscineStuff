/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:19:30 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/15 17:54:49 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n != 0)
	{	
		i = 0;
		while (*(s1 + i) == *(s2 + i) && *(s1 + i) != 0 && *(s2 + i) != 0 && i < n - 1)
			i++;
		return ((unsigned char) *(s1 + i) - (unsigned char) *(s2 + i));
	}
	return (0);
}
