#include "bull.h"
#include <iostream>

void bull(int f[],int n,double *counterBull) {

	for(int j=n-1;j>0;j--) {
		 *counterBull=*counterBull+1;
		for(int i=0;i<j;i++) {
			*counterBull=*counterBull+1;
			if(f[i]>f[i+1]) {
				int x;
				x=f[i];*counterBull=*counterBull+1;
				f[i]=f[i+1];*counterBull=*counterBull+1;
				f[i+1]=x;	*counterBull=*counterBull+1;		
		}	
	}	
	}
	}
