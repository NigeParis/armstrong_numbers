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
*/

bool is_armstrong_number(int candidate);

#endif
