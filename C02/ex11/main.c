void	ft_putstr_non_printable(char *str);

int main()
{
	char x[] = "ola		\n";
	x[1] = (unsigned char) 238;
	ft_putstr_non_printable(x);
}
