/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   armstrong_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:46:33 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/05 22:41:17 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "armstrong_numbers.h"

static int	ft_get_nbr_of_digits(int number);
static int	ft_check_number_is_positive(int nbr);
static int	ft_pow(int power, int current_digit);

bool	is_armstrong_number(int candidate)
{
	int	power;
	int	original_number;
	int	current_digit;
	int	result;
	int	sum;

	original_number = candidate;
	sum = 0;
	candidate = ft_check_number_is_positive(original_number);
	power = ft_get_nbr_of_digits(original_number);
	while (candidate)
	{
		current_digit = candidate % 10;
		result = ft_pow(power, current_digit);
		sum += result;
		candidate /= 10;
	}
	return (sum == original_number);
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
*	checks if number is positive and returns the number or 0 if negative
*/

static int	ft_check_number_is_positive(int nbr)
{
	if (nbr < 0)
		nbr = 0;
	return (nbr);
}

/**
*	gets the sum of a power calculation 3^3 returns 27 
*/

static int	ft_pow(int nbr_of_iterations, int current_digit)

{
	int	iteration;
	int	result = 1;

	iteration = 0;
	while ((iteration++) != nbr_of_iterations)
		result = result * current_digit;
	return (result);
}
