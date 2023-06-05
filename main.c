/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:05:56 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/05 13:44:12 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include "armstrong_numbers.h"

#define MIN 0
#define MAX 2147483647


bool	is_armstrong_number(int candidate);


int	main(void)
{
	
	int	count;
	int	nbr;

	count = MIN;
	nbr = 0;
	while (count < MAX)
	{
		if (is_armstrong_number(nbr))
		{
			printf("\nThis is an armstrong number     :  %d", nbr);
		}
		else
		{
//			printf("\nThis is NOT an armstrong number :  %d\n", nbr);
		}
		count++;
		nbr++;
	}

	return (0);
}

