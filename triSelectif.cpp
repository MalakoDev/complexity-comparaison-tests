#include "triSelectif.h"
void triselectif(int t[],int n,double *counterSilectif) {
	for(int i=0;i<n;i++) {
	*counterSilectif=*counterSilectif+1; 
		for(int j=i+1;j<n;j++) {
			*counterSilectif=*counterSilectif+1; 
			if(t[i]>t[j]){
				int x;
				x=t[i];*counterSilectif=*counterSilectif+1; 
				t[i]=t[j];*counterSilectif=*counterSilectif+1; 
				t[j]=x;*counterSilectif=*counterSilectif+1; 
			}		
		}}}
