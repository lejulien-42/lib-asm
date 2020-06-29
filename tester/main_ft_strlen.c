/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/28 18:16:40 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

size_t	ft_strlen(const char *s);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de ft_strlen:\e[24m\n\n");

	char *str = "Une simple chaine de charactere\n";
	
	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	int ret1 = strlen(str);
	int ret2 = ft_strlen(str);
	if (ret1 == ret2)
		printf("Test of return values nbr 1 : ✅\n");
	else
	{
		printf("Test of return values nbr 1 : 🚫\n");
		printf(RED);
		printf("    strlen return : %d\n    ft_strlen return : %d\n\n", ret1, ret2);
		printf(BLUE);
	}
	str = "a\n";
	printf("    ");
	ret1 = strlen(str);
	ret2 = ft_strlen(str);
	if (ret1 == ret2)
		printf("Test of return values nbr 2 : ✅\n");
	else
	{
		printf("Test of return values nbr 1 : 🚫\n");
		printf(RED);
		printf("    strlen return : %d\n    ft_strlen return : %d\n\n", ret1, ret2);
		printf(BLUE);
	}


}
