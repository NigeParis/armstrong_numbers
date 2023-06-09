/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   armstrong_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:46:33 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/06 18:16:39 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "armstrong_numbers.h"

static int	ft_get_nbr_of_digits(int number);
static int	ft_pow(int power, int current_digit);

bool	is_armstrong_number(int candidate)
{
	int	power;
	int	original_number;
	int	current_digit;
	int	result;

	original_number = candidate;
	result = 0;
	power = ft_get_nbr_of_digits(original_number);
	if (original_number < 0)
		return (false);
	while (candidate)
	{
		current_digit = candidate % 10;
		result = result  + ft_pow(power, current_digit);
		candidate /= 10;
	}
	return (result == original_number);
}

/**
*	gets number of digits and returns the number 99 -> 2 etc
*/

static int	ft_get_nbr_of_digits(int number)
{
	int	nbr_of_digits;

	nbr_of_digits = 0;
	while (number)
	{
		number /= 10;
		nbr_of_digits++;
	}
	return (nbr_of_digits);
}

/**
*	pow() gets the power calculation ex : 3^3 returns 27 
*/

static int	ft_pow(int base, int power)

{
	int	iteration;
	int	result;

	result = 1;
	iteration = 0;
	while ((iteration++) != base)
		result = result * power;
	return (result);
}
