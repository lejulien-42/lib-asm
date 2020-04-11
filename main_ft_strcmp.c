/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 18:06:33 by lejulien          #+#    #+#             */
/*   Updated: 2020/04/10 18:20:55 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int
	main(int ac, char **av)
{
	if (ac == 3)
		printf("res ft  -=> %d\nres nor -=> %d\n", ft_strcmp(av[1], av[2]), strcmp(av[1], av[2]));
	return (0);
}
