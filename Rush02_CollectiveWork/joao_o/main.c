/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaooliv <joaooliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:03:03 by joaooliv          #+#    #+#             */
/*   Updated: 2022/08/20 19:34:44 by joaooliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int	ft_str_num_count(char *str)
{
	int	count;

	count = 0;
	while (str[count] >= '0' && str[count] <= '9')
		count++
	return (count);
}

int	ft_str_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	dict_cmp(char *str1, char *str2)
{
	int	str_len_cmp;

	str_len_cmp = ft_str_num_count(str1) - ft_str_num_count(str2);
	if (str_len_cmp == 0)
		return (ft_strcmp(str1, str2));
	return (str_len_cmp);
}

void	print_number(char *start, char *end, char *file_path)
{
	// compare str between start and end with entries in dict
	char	*aux;
	int		file_descriptor;
	char	*found_key;
	char	*found_

	file_descriptor = open(file_path, O_RDONLY);
	
	close(file_descriptor);
}

int	main()
{
	char	*n = "25";
	char	*file_path = "dict";

	print_number(n, n + ft_str_len(n), file_path, );
	int magnitude_order = ft_str_len(n);
	while (*n)
	{

		n++;
	}
}
