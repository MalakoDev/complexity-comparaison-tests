#include "towerOfHanoi.h"
#include<iostream>

void hanoi(int n,char deb,char inter,char fin,double *compteurHanoie){
	
	if(n==1) {
		*compteurHanoie=*compteurHanoie+1;
		std::cout<<deb<<" toooo  "<<fin<< std::endl;
	}

	else {
		hanoi((n-1),deb,fin,inter,compteurHanoie);
		hanoi(1,deb,inter,fin,compteurHanoie);
		hanoi(n-1,inter,deb,fin,compteurHanoie);
	
	}
	
}

