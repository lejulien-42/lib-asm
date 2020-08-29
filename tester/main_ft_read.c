/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/08/29 14:48:37 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

size_t	ft_read(int fd, const void *buf, size_t nbyte);

int is_ctrl = 0;

void
	get_sig(int nanana)
{
	is_ctrl = 1;
	printf(GREEN);
	printf("    Thx\n");
	system("rm main_ft_read");
	printf(WHITE);
}

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
	char ret3[50];
	char ret4[50];
	int	errno1;
	int errno2;
	int returned;
	int returned2;

	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	printf("return of a zero count : ");
	returned = read(fd, &ret1, 0);
	returned2 = ft_read(fd_ft, &ret2, 0);
	signal(SIGINT, get_sig);
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
	printf("    The read standard entry : \n    Type and press ctrl-c and enter\n\n");
	printf(WHITE);
	printf("ret1 -=> %c, ret2 -=> %c\n", ret1, ret2);
	ret1 = 'q';
	ret2 = 'q';
	while (!is_ctrl)
	{
		errno = 0;
		returned = read(1, &ret1, 1);
		errno1 = errno;
		printf("\n    read -=> %c | errno = %d\n", ret1, errno);
		errno = 0;
		returned2 = ft_read(1, &ret2, 1);
		printf("    ft_read -=> %c | errno = %d\n", ret2, errno);
		errno2 = errno;
		if (ret1 != ret2)
			printf("🚫\n");
		else
			printf("✅\n");
	}
	fcntl(null, F_SETFL, O_NONBLOCK);
	fcntl(null_ft, F_SETFL, O_NONBLOCK);
	errno = 0;
	printf("    errno1 = %d\n    errno2 = %d\n", errno1, errno2);
	read(null, ret3, 50);
	errno1 = errno;
	errno = 0;
	ft_read(null_ft, ret4, 50);
	errno2 = errno;
	printf("-=>%d %d\n", errno1, errno2);
	return (0);
}
