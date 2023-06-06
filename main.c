/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:05:56 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/06 17:43:29 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include "armstrong_numbers.h"

#define MIN 0
#define MAX 2000
#define NUM -1000

bool	is_armstrong_number(int candidate);

int	main(void)
{
	int	count;
	int	nbr;

	count = MIN;
	nbr = NUM;
	while (count < MAX)
	{
		if (is_armstrong_number(nbr))
		{
			printf("\nThis is an armstrong number : %d", nbr);
		}
		count++;
		nbr++;
	}
	return (0);
}
