/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr != NULL && len > 0)
	{
		int swap1=0, swap2=0;
		int x = 0,flag=0;
		while (x < len && flag!=2)
		{
			if (Arr[x]>Arr[x + 1] && flag == 0){ swap1 = x; flag = 1; ++x; }
			if (Arr[x] > Arr[x + 1] && flag == 1){ swap2 = x + 1; flag = 2; }
			x++;
		}
		int inter = Arr[swap1];
		Arr[swap1] = Arr[swap2];
		Arr[swap2] =inter;
		//return Arr;
	}
	else{
		return NULL;
	}
}