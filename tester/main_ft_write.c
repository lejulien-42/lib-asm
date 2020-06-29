/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/28 03:07:41 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

size_t	ft_write(int fd, const void *buf, size_t nbyte);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de ft_write:\e[24m\n\n");

	char *str = "Une simple chaine de charactere\n";
	int fd = open("write.txt", O_RDWR | O_CREAT, 77777);
	int fd_ft = open("ft_write.txt", O_RDWR | O_CREAT, 77777);
	int null = open("ft_write.txt", O_RDWR | O_CREAT, 77777);
	int null_ft = open("ft_write.txt", O_RDWR | O_CREAT, 77777);
	int ret1;
	int ret2;

	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	printf("generating files and comparing write : ");
	ret1 = write(fd, "Hi\n", 3);
	ret2 = ft_write(fd_ft, "Hi\n", 3);
	int isdiff = system("diff write.txt ft_write.txt");
	if (isdiff != 0)
	{
		printf("🚫\n\n");
		printf(RED);
		printf("    ");
		system("cat write.txt && cat ft_write.txt");
		printf(BLUE);
	}
	else
		printf("✅\n");
	printf("    the return value : ");
	if (ret1 != ret2)
	{
		printf("🚫\n\n");
		printf(RED);
		printf("    ret write = %d\n    ret ft__write = %d\n", ret1, ret2);
		printf(BLUE);
	}
	else
		printf("✅\n");
	printf("    test of null entry : ");
	ret1 = write(null, NULL, 1);
	ret2 = write(null_ft, NULL, 1);
	if (ret1 == -1 && ret2 != -1)
	{	
		printf("🚫\n");

	}
	else
		printf("✅\n");
}
