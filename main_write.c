/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 03:00:08 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/18 17:35:11 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int write(int fd, const void *buf, int count);

int
	main()
{
	char *text = "Hello world\n";
	write(1, text, strlen(text));
	return (0);
}
