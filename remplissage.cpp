#include "remplissage.h"
#include <cstdlib>
#include <ctime>

void remplissage(int t[],int n){
	srand(time(0));
	for(int i=0;i<n;i++){

		t[i]=rand()%800;
	}
}
