#include "mergeSort.h"
void merge(int t[], int deb, int mid, int fin,double *counterMergeSort) 
{ int i, j, k; 
    int n1 = mid - deb + 1; *counterMergeSort=*counterMergeSort+1;
    int n2 =  fin - mid; *counterMergeSort=*counterMergeSort+1;
int L[n1], R[n2]; 
for (i = 0; i < n1; i++){
	*counterMergeSort=*counterMergeSort+1;
	L[i] = t[deb + i];
}  
        
    for (j = 0; j < n2; j++){
    *counterMergeSort=*counterMergeSort+1;
    	R[j] = t[mid + 1+ j];
	} 
        
i = 0;*counterMergeSort=*counterMergeSort+1;
j = 0;*counterMergeSort=*counterMergeSort+1;
k = deb;*counterMergeSort=*counterMergeSort+1;
 while (i < n1 && j < n2) 
    { *counterMergeSort=*counterMergeSort+1;
        if (L[i] <= R[j]) 
        { 
            t[k] = L[i]; *counterMergeSort=*counterMergeSort+1;
            i++; 
        } 
        else
        { 
            t[k] = R[j]; *counterMergeSort=*counterMergeSort+1;
            j++; 
        } 
        k++; 
    }
while (i < n1) 
    { *counterMergeSort=*counterMergeSort+1;
        t[k] = L[i]; 
        i++; 
        k++; 
    } 
 while (j < n2) 
    { *counterMergeSort=*counterMergeSort+1;
        t[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
///////////////////////
void mergeSort(int t[], int deb, int fin,double *counterMergeSort)
{ 
   *counterMergeSort=*counterMergeSort+1;
    if (deb  < fin) 
    { 
        // Same as (deb+fin)/2, but avoids overflow for 
        // large l and h 
        int mid = deb+(fin-deb)/2; *counterMergeSort=*counterMergeSort+1;
  
        // Sort first and second halves 
        mergeSort(t, deb, mid,counterMergeSort); 
        mergeSort(t, mid+1, fin,counterMergeSort);   
        merge(t, deb, mid, fin,counterMergeSort); 
    } 
    
}





