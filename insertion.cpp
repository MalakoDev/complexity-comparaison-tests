#include "insertion.h"

void insertion(int t[],int n,double *counterInsertion) {
	for(int i=0;i<n;i++) {
		*counterInsertion=*counterInsertion+1;
		for(int j=0;j<i;j++) {
			*counterInsertion=*counterInsertion+1;
			if(t[j]>t[i]) {
				int x;
				x=t[j]; *counterInsertion=*counterInsertion+1;
				t[j]=t[i]; *counterInsertion=*counterInsertion+1; 
				t[i]=x;	*counterInsertion=*counterInsertion+1;		
		}
		}
	}
}
