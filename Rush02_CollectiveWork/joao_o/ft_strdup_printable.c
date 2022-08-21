// receives a NULL terminated string and duplicates to heap, 
// returning a pointer to it
// or a NULL pointer if it's not printable
char	*ft_str_dup_printable(char *src)
{
	char	*dest;
	char	*orig_dest;

	orig_dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	dest = orig_dest;
	if (dest)
	{
		while (*src)
		{
			if (*src < 32 && *src >= 127)
				return ((char *) 0);
			*dest++ = *src++;
		}
		*dest = 0;
	}
	return (orig_dest);
}

