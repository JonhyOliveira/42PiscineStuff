# include <stdio.h>

int		get_sign(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;
}

int ft_strcmp(char *s1, char *s2);
void	ex00()
{
	char	*str1[] = { "abc", "ab", "abc", "abc" };
	char	*str2[] = { "abc", "abc", "ab", "abd" };
	int		expected_sign[] = { 0, -1, 1, -1 };
	int		got_signs[4];

	int success = 1;
	// do test
	for (int i = 0; i < 4; i++)
	{
		got_signs[i] = get_sign(ft_strcmp(str1[i], str2[i]));
		if (got_signs[i] != expected_sign[i])
			success = 0;
	}
	// print results
	printf("\nEx00: %s\n", success ? "OK" : "NO");
	if (!success)
	for (int i = 0; i < 4; i++)
	{
		// strings
		printf("\ns1: \"%s\", s2: \"%s\" - ", str1[i], str2[i]);
		// result
		if (expected_sign[i] != got_signs[i]) // fail
		{
			printf("no (got %i, expected %i)", got_signs[i], expected_sign[i]);
		}
		else
		{
			printf("ok (%i)", got_signs[i]);
		}
	}
	printf("\n");
}

int ft_strncmp(char *s1, char *s2, unsigned int n);
void	ex01()
{
	char			*str1[] = { "abc", "abc", "abc", "abc" };
	char			*str2[] = { "a", "a", "abc", "abd" };
	unsigned int	n[] =  { 1, 3,  10, 2 };
	int				expected_sign[] = { 0, 1, 0, 0 };
	int				got_signs[4];

	int success = 1;
	// do test
	for (int i = 0; i < 4; i++)
	{
		got_signs[i] = get_sign(ft_strncmp(str1[i], str2[i], n[i]));
		if (got_signs[i] != expected_sign[i])
			success = 0;
	}
	// print results
	printf("\nEx01: %s\n", success ? "OK" : "NO");
	if (!success)
	for (int i = 0; i < 4; i++)
	{
		// strings
		printf("\ns1: \"%s\", s2: \"%s\", size: %i - ", str1[i], str2[i], n[i]);
		// result
		if (expected_sign[i] != got_signs[i]) // fail
		{
			printf("no (got %i, expected %i)", got_signs[i], expected_sign[i]);
		}
		else
		{
			printf("ok (%i)", got_signs[i]);
		}
	}
	printf("\n");

}

char	*ft_strcat(char *dest, char *src)
void	ex02()
{
	char	*src[] = {};
	char	*dest[] = {};
	char	*expected_dest[] = {};

	int success = 1;
}

int main()
{
	ex00();
	ex01();
}
