#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char	*alloc_str(unsigned int size)
{
	return (char *) malloc(size);
}

unsigned int	ft_strcpy(char *dest, char *src);


void	test_size(char *src)
{
	char *dest_my_cp = alloc_str(3);
	char *dest_orig_cp = alloc_str(3);
	
	ft_strcpy(dest_my_cp, src);
	strcpy(dest_orig_cp, src);

	if (strcmp(dest_my_cp, dest_orig_cp) != 0)
		printf("- FAIL: got \'%s\', expected \'%s\'", dest_my_cp, dest_orig_cp);
	else
		printf("- OK: %s", dest_my_cp);
	printf("\n");
}

int main()
{
	char src[] = "olado";

	printf("strlcpy test:\n");
	printf("src: \'%s\'\n", src);
	test_size(src);
}
