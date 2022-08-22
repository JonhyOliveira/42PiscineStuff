/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:17:03 by lclaudio          #+#    #+#             */
/*   Updated: 2022/08/21 23:17:04 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define LINE_MAX_LENGTH 100

int		checkfirstandzero(char *array, char *argv);
void	change_dict(char *new_dict);
int		ft_strlen(char *str);
char	*correctlength(char *str);
void	ft_putstr(char *str);
int		ft_str_is_numeric(char *str);
char	*find_key(char *file, char *key);
void	print_mag(int mag);
void	print_nb(char a, char b);
int		hundreds(char hundred, int before);
int		decimals(char decimal, char unity, int before);

extern char	*g_dict_path;

#endif
