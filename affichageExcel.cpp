#include<iostream>
#include <fstream>
#include"affichageExcel.h"

void affichageExcel(double counterSilectif,double counterInsertion,double counterBull,double counterMergeSort,double counterRapide,int taille,std::ofstream &l)
{
	l<<taille;
		
	l<<" ; "<<counterSilectif<<";"<<counterInsertion<<";"<<counterBull<<";"<<counterMergeSort<<";"<<counterRapide<<std::endl;	
	
}
