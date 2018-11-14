#include<iostream>
#include <cstdlib>
#include "triRapide.h"

// Swapping two values.
void swap(int *a, int *b,double *counterRapide)
{
	int temp; 
	temp = *a; *counterRapide=*counterRapide+1;
	*a = *b; *counterRapide=*counterRapide+1;
	*b = temp; *counterRapide=*counterRapide+1;
}
 
// Partitioning the array on the basis of values at high as pivot value.
int Partition(int a[], int low, int high,double *counterRapide)
{
	int pivot, index, i;
	index = low; *counterRapide=*counterRapide+1;
	pivot = high; *counterRapide=*counterRapide+1;
 
	// Getting index of pivot.
	for(i=low; i < high; i++)
	{*counterRapide=*counterRapide+1;
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index],counterRapide);
			index++;
		}
	}
	// Swapping value at high and at the index obtained.
	swap(&a[pivot], &a[index],counterRapide);
 
	return index;
}
 
// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high,double *counterRapide)
{
	int pvt, n, temp;
	n = rand(); *counterRapide=*counterRapide+1;
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1); *counterRapide=*counterRapide+1;
 
	// Swapping pvt value from high, so pvt value will be taken as pivot while partitioning.
	swap(&a[high], &a[pvt],counterRapide);
 
	return Partition(a, low, high,counterRapide);
}
 
// Implementing QuickSort algorithm.
void triRapide(int a[], int low, int high,double *counterRapide)
{ *counterRapide=*counterRapide+1;
	int pindex;
	if(low < high)
	{
		// Partitioning array using randomized pivot.
		pindex = RandomPivotPartition(a, low, high,counterRapide);
		// Recursively implementing QuickSort.
		triRapide(a, low, pindex-1,counterRapide);
		triRapide(a, pindex+1, high,counterRapide);
	}

}
