# armstrong_numbers

Instructions
An Armstrong number (AKA Plus Perfect number, or narcissistic number)
An Armstrong number is a number that is the sum of its own digits each raised
 to the power of the number of digits.

For example:

	9 is an Armstrong number, because 9 = 9^1 = 9
	10 is not an Armstrong number, because 10 != 1^2 + 0^2 = 1
	153 is an Armstrong number, because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
	154 is not an Armstrong number, because: 154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190
	Write some code to determine whether a number is an Armstrong number.

Note negative numbers return : false.


https://en.wikipedia.org/wiki/Narcissistic_number

Write the function that determines if the number is an armstrong number or not.
Calulate all the numbers in an signed int.
Function returns true or false 

library allowed unistd.h, stdbool.h, stdlib.h

prototype :  bool	is_armstrong_number(int candidate)

-----------------------------------------------------------------------------
