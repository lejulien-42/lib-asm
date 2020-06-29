/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/28 20:08:32 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

char	*ft_strdup(const char *src);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de ft_strdup:\e[24m\n\n");

	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	char *dststrdup = strdup("H");
	char *dstft_strdup = ft_strdup("H");
	if (strcmp(dststrdup, dstft_strdup) == 0)
		printf("Test of duplication : ✅\n");
	else
	{
		printf("Test of dupliction : 🚫\n");
		printf(RED);
		printf("    strdup ret : %s\n    ft_strdup ret : %s\n\n", dststrdup, dstft_strdup);
	}
	return (0);
}
