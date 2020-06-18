/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:48:45 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/18 19:24:35 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int read(int fd, void *buf, int count);

int
	main(void)
{
	char *res = NULL;
	if (read(1, NULL, 4) == 0)
		printf("ok\n");
	else
		printf("%s\n", res);
	return (0);
}
