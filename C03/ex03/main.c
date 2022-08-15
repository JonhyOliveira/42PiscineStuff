char	*ft_strncat(char *dest, char *src, unsigned int nb);

#include <stdio.h>
int main()
{
	char src[] = "olado";
	char dest[] = "ohohohoh";

	dest[5] = 0;
	printf("src: %s | dest: %s\n", src, dest);
	ft_strncat(dest, src, 6);
	printf("dest: %s\n", dest);
}
