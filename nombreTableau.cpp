#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include "nombreTableau.h"
#include "remplissage.h"
#include "affichage.h"
#include "triSelectif.h"
#include "insertion.h"
#include "bull.h"
#include "mergeSort.h"
#include "towerOfHanoi.h"
#include "triRapide.h"
#include"copieElemnts.h"
#include"affichageExcel.h"
#include"affichageLog.h"
#include"afficheHanoieExcel.h"

   
    
 void nombreTableau(int choix,std::ofstream *FluxE,std::ofstream *FluxS){
       
        for(int i=0;i<choix;i++){
            
              
                  int* t=(int*) malloc(9000000* sizeof(int));
         
                 int taille=0;
                  int x=0; double counterSilectif=0, counterBull=0,counterInsertion=0,counterMergeSort=0,counterRapide=0;
                  
                  std::cout<<"entrer l taille de votre tableau: ";
                  std::cin>> taille;
                  int* tableau=(int*)malloc(taille* sizeof(int));
                  int* t1=(int*)malloc(taille* sizeof(int));
                  int* t2=(int*)malloc(taille* sizeof(int));
                  int* t3=(int*)malloc(taille* sizeof(int));
                  int* t4=(int*)malloc(taille* sizeof(int));
                  int* tnontrie=(int*)malloc(taille* sizeof(int));
                  remplissage(tableau,taille);
                  copieElemnts(tableau,t1,t2,t3,t4,tnontrie,taille);
                
                  //les tris began
                  
                  
                  clock_t deb=clock();
                  triselectif(tableau,taille,&counterSilectif);
                  clock_t fin=clock();
                 
                  double tempselectif=((double) (fin-deb))/( (double)CLOCKS_PER_SEC);
                
				  clock_t debe=clock();
                  insertion(t1,taille,&counterInsertion);
                  clock_t fine=clock();
                double tempsinsertion=((double) (fine-debe))/( (double)CLOCKS_PER_SEC);
				clock_t deba=clock();
                  bull(t2,taille,&counterBull);
                  clock_t fina=clock();
                double tempsbull=((double) (fina-deba))/( (double)CLOCKS_PER_SEC);
                  clock_t debb=clock();
                  mergeSort(t3,0,taille-1,&counterMergeSort);
                  clock_t finb=clock();
                double tempsmergesort=((double) (finb-debb))/( (double)CLOCKS_PER_SEC);
               
                 clock_t debc=clock();
                  triRapide(t4,0,taille-1,&counterRapide);
                  clock_t finc=clock();
                double tempstrirapide=((double) (finc-debc))/( (double)CLOCKS_PER_SEC);
            
                  affichageExcel(counterSilectif,counterInsertion,counterBull,counterMergeSort,counterRapide,taille,*FluxE);
                  affichageLog(tableau,t1,t2,t3,t4,tnontrie,taille,*FluxS,tempselectif,tempsinsertion,tempsbull,tempsmergesort,tempstrirapide);

                  std::cout<<"\n\n"<<std::endl;
              }
        
    
            
        }

