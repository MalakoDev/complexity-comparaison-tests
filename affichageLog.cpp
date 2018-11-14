#include<iostream>
#include"affichageLog.h"
#include <fstream>

void affichageLog(int t[],int ta[],int tb[],int tc[],int td[],int tOrigin[],int taille,std::ofstream &d,double tempselectif,double tempsinsertion,double tempsbull,double tempsmergesort,double tempstrirapide)
{
            
        d<<taille;
        for(int i=0;i<taille;i++){
            
         d<<"        \t\t "<<tOrigin[i]<<"\t\t  "<<t[i]<<"\t\t  "<<ta[i]<<"\t\t  "<<tb[i]<<"\t\t\t "<<tc[i]<<"\t\t"<<td[i]<<"\t"<<std::endl;   
            }
        d<<"_______________________________________________________________________________________________________________________________"<<std::endl;  
        d<<"temps dexe ms";
        d<<"\t\t\t\t  "<<tempselectif<<"\t\t  "<<tempsinsertion<<"\t\t  "<<tempsbull<<"\t\t\t "<<tempsmergesort<<"\t\t"<<tempstrirapide<<"\t"<<std::endl;   
		    
        d<<"_______________________________________________________________________________________________________________________________"<<std::endl;
    }
