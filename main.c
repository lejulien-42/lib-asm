/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 16:42:06 by lejulien          #+#    #+#             */
/*   Updated: 2020/04/08 17:10:08 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int
	main(int ac, char **av)
{
	if (ac == 2)
		printf("%s\nLenght = %d\n", av[1], ft_strlen(av[1]));
	else
		printf("Please enter a string\n");
	return (0);
}
