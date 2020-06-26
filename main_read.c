/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 18:48:45 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/19 15:55:29 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

int ft_read(int fd, void *buf, int count);

int
	main(void)
{
	char *res = NULL;

	int	ret = ft_read(0, res, 0);

	printf("ret = %d, %s\n", ret, res);
	return (0);
}
