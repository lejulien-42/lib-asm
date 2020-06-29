/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_write.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/28 04:08:14 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

size_t	ft_read(int fd, const void *buf, size_t nbyte);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de read:\e[24m\n\n");

	char *str = "A normal file\n";
	int fd = open("file", O_RDONLY);
	int fd_ft = open("file", O_RDONLY);
	int null = open("empty_file", O_RDONLY);
	int null_ft = open("empty_file", O_RDONLY);
	char ret1;
	char ret2;
	int returned;
	int returned2;

	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	printf("return of a zero count : ");
	returned = read(fd, &ret1, 0);
	returned2 = ft_read(fd_ft, &ret2, 0);
	if (returned != returned2)
	{
		printf("🚫\n\n");
		printf(RED);
		printf("    ");
		system("read : %d\n    ft_read : %d\n");
		printf(BLUE);
	}
	else
		printf("✅\n");
	printf("    The read memory : ");
	returned = read(null, &ret1, 1);
	returned2 = read(null_ft, &ret2, 1);
	if (strcmp(&ret1, &ret2) != 0)
	{	
		printf("🚫\n");

	}
	else
		printf("✅\n");
}
