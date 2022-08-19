#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char	*alloc_str(unsigned int size)
{
	return (char *) malloc(size);
}

unsigned int	ft_strncpy(char *dest, char *src, unsigned int size);

void	test_size(char *src, unsigned int size)
{
	char *dest_my_cp = alloc_str(size);
	char *dest_orig_cp = alloc_str(size);

	printf("size = %d:\n", size);
	ft_strncpy(dest_my_cp, src, size);
	strncpy(dest_orig_cp, src, size);

	if (strcmp(dest_my_cp, dest_orig_cp) != 0)
		printf("- FAIL: got \'%s\', expected \'%s\'", dest_my_cp, dest_orig_cp);
	else
		printf("- OK: %s", dest_my_cp);
	printf("\n");
}

int main()
{
	char src[] = "olado";

	printf("strncpy test:\n");
	printf("src: \'%s\'\n", src);
	test_size(src, 3);
	test_size(src, 5);
	test_size(src, 10);
}
