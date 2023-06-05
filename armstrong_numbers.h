#ifndef ARMSTRONG_NUMBERS_H
#define ARMSTRONG_NUMBERS_H

#include <stdbool.h>
#include <stdlib.h>

/**
*	DESCRITPTION : bool is_armstrong_number( int)
*	An Armstrong number is a number that is the sum of its own digits each 
*	raised to the power of the number of digits.
*  Note negative numbers returns false.
*	
*	ARGS : takes a integer number "candidate"
*	RETURNS : true ou false if a armstrong number or not
*
*	EXAMPLES : 9 = 9^1 is an armstrong number
*	10 != 1^2 + 0^2 = 1 
*  
*	DEPENDANCES : ft_get_nbr_digits(), ft_get_last_digit()
*	              ft_is_not_negative_number(), ft_get_sum.
*/

bool is_armstrong_number(int candidate);
int	ft_get_nbr_of_digits(int candidate_copy);
int	ft_get_last_digit(int nbr);
int	ft_is_not_negative_number(int nbr);
int	ft_get_sum(int power, int power_sum, int current_digit);

#endif
