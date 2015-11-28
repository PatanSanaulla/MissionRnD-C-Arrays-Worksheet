/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (Arr != NULL && len > 0)
	{
	   Arr = (int*)realloc(Arr, len + 2 * sizeof(int));
		int x = 0, flag=0;
		
		while (x < len-1 && flag==0){
			if (Arr[x] > num)
			{
				flag = 1;
				int y = len-1;
				while (y >= x){

					Arr[y+1] = Arr[y];
					--y;
			   }
				Arr[x] = num;
			}
			x++;
		}
		if (flag == 0){ Arr[len] = num; } 
		return Arr;
		//free(Arr); 
		}
	else	{
		return NULL;
	}
}