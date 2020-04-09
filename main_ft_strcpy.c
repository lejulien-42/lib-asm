#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int
	main(void)
{
	char *src = "";
	char dest[4];
	ft_strcpy(dest, src);
	printf("src -=> %s\ndest -=> %s\n", src, dest);
	return (0);
}
