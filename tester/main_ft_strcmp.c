/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/27 22:09:08 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

int		ft_strcmp(const char *str1, const char *str2);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de ft_strcmp:\e[24m\n\n");

	char *str1 = "Une simple chaine de charactere\n";
	char *str2 = "Une simple chaine de charactere\n";
	
	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
		printf("Same length str : ✅\n");
	else
		printf("Same length str : 🚫\n");
	str1 = "b";
	str2 = "a";
	printf("    ");
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
		printf("Str2 smaller : ✅\n");
	else
	{
		printf("Str2 smaller : 🚫\n");
		printf(RED);
		printf("system ret : %d\n", strcmp(str1, str2));
		printf("your   ret : %d\n", ft_strcmp(str1, str2));
		printf(BLUE);
	}
	str1 = "a";
	str2 = "b";
	printf("    ");
	if (strcmp(str1, str2) == ft_strcmp(str1, str2))
		printf("Str1 smaller : ✅\n");
	else
	{
		printf("Str1 smaller : 🚫\n");
		printf(RED);
		printf("system ret : %d\n", strcmp(str1, str2));
		printf("your   ret : %d\n", ft_strcmp(str1, str2));
		printf(BLUE);
	}
}
