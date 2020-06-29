/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lejulien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:17:37 by lejulien          #+#    #+#             */
/*   Updated: 2020/06/28 03:01:15 by lejulien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define GREEN "\e[32m"
#define WHITE "\e[39m"
#define BLUE "\e[35m"
#define RED "\e[91m"

char	*ft_strcpy(char *dst, const char *src);

int		main(void)
{
	printf(GREEN);
	printf("\n    \e[4mTest de ft_strcpy:\e[24m\n\n");

	// Test 1
	printf(WHITE);
	printf("    ");
	printf(BLUE);
	char dststrcpy[20];
	char dstft_strcpy[20];
	strcpy(dststrcpy, "Hello");
	ft_strcpy(dstft_strcpy, "Hello");
	if (strcmp(dststrcpy, dstft_strcpy) == 0)
		printf("Test of copying : ✅\n");
	else
		printf("Test of copying : 🚫\n");
	
	// Test 2
	printf("    ");
	char dststrcpy2[20];
	char dstft_strcpy2[20];
	char *val1 = strcpy(dststrcpy2, "Hi\n");
	char *val2 = ft_strcpy(dstft_strcpy2, "Hi\n");
	if (strcmp(val1, val2) == 0)
		printf("Test of returned string : ✅\n");
	else
	{
		printf("Test of returned string : 🚫\n");
		printf(RED);
		printf("    str write : %s\n    str ft_write : %s\n", val1, val2);
		printf(BLUE);
	}
	return (0);
}
