/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 08/21/2022 16:32:29                      #+#    #+#             */
/*   Updated: 2022/08/21 16:32:34 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// reads a line from a file to the buffer
void	read_line(char *buf, int file_descriptor, int *done)
{
	read(file_descriptor, buf, 1);
	while (*buf != '\n' && *buf != 0)
	{
		buf++;
		read(file_descriptor, buf, 1);
	}
	if (*buf == 0)
		*done = 1;
	*buf = 0;
}
