/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   armstrong_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:46:33 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/05 12:01:00 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "armstrong_numbers.h"

bool	is_armstrong_number(int candidate)
{
	int	power;
	int	candidate_copy;
	int	current_digit;
	int	power_sum;
	int	sum;

	power = 0;
	current_digit = 0;
	sum = 0;
	candidate_copy = ft_is_not_negative_number(candidate);
	power = ft_get_nbr_of_digits(candidate_copy);
	candidate_copy = candidate;
	while (candidate_copy)
	{
		current_digit = ft_get_last_digit(candidate_copy);
		power_sum = ft_get_sum(power, 1, current_digit);
		sum = sum + power_sum;
		candidate_copy /= 10;
	}
	if (sum == candidate)
		return (true);
	return (false);
}

/*  i know i can do this but not permitted at 42 
*   return (sum == candidate ? true : false )
*/

/**
*	gets number of digits and returns the number 99 -> 2 etc
*
*/

int	ft_get_nbr_of_digits(int number)
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
*	get last digit in a number  123 -> 3
*/

int	ft_get_last_digit(int nbr)
{
	int	last_digit;

	last_digit = 0;
	last_digit = nbr % 10;
	return (last_digit);
}

/**
*	checks if number is positive
*/

int	ft_is_not_negative_number(int nbr)
{
	if (nbr < 0)
		nbr = -1;
	return (nbr);
}

/**
*	gets the sum of a power calculation 3^3 returns 27 
*
*/

int	ft_get_sum(int power, int power_sum, int current_digit)
{
	int	nbr;

	nbr = 0;
	while ((nbr++) != power)
		power_sum = power_sum * current_digit;
	return (power_sum);
}
