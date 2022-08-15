unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	final_size;
	unsigned int	i;

	final_size = 0;
	while (*dest)
	{
		dest++;
		final_size++;
	}
	if (size != 0)
	{
		i = 0;
		while (src[i] && final_size < size)
		{
			dest[i] = src[i];
			i++;
			final_size++;
		}
		dest[i] = 0;
	}
	return (final_size);
}
