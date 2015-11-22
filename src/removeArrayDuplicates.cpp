/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int x = 0;
	while (x <= len){
		for (int i = x + 1; i < len - 1; i++)
		{
			if (*(Arr + x) == *(Arr + i)){
				int y = i;
				while (y < len){
					*(Arr + y) = *(Arr + y + 1);
					y++;
				}
				len--;
				x--;
				//i--;
			}
		}
		x++;
	}
	return NULL;
}