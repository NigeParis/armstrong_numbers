/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   armstrong_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 42_Legin <Nige@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 20:46:33 by 42_Legin          #+#    #+#             */
/*   Updated: 2023/06/05 21:02:35 by 42_Legin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "armstrong_numbers.h"

static int	get_power(int candidate_copy);
static int	check_candidate_number_is_positive(int nbr);
static int	get_sum(int power, int power_sum, int current_digit);

bool	is_armstrong_number(int candidate)
{
	int	power;
	int	candidate_copy;
	int	current_digit;
	int	power_sum;
	int	sum;

	sum = 0;
	candidate_copy = check_candidate_number_is_positive(candidate);
	power = get_power(candidate);
	while (candidate_copy)
	{
		current_digit = candidate_copy % 10;
		power_sum = get_sum(power, 1, current_digit);
		sum += power_sum;
		candidate_copy /= 10;
	}
	return (sum == candidate);
}

/**
*	gets number of digits and returns the number 99 -> 2 etc
*/

static int	get_power(int number)
{
	int	power;

	power = 0;
	while (number)
	{
		number /= 10;
		power++;
	}
	return (power);
}

/**
*	checks if number is positive
*/

static int	check_candidate_number_is_positive(int nbr)
{
	if (nbr < 0)
		nbr = 0;
	return (nbr);
}

/**
*	gets the sum of a power calculation 3^3 returns 27 
*/

static int	get_sum(int power, int power_sum, int current_digit)
{
	int	nbr;

	nbr = 0;
	while ((nbr++) != power)
		power_sum = power_sum * current_digit;
	return (power_sum);
}
