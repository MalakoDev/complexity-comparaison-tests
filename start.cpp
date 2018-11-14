#include<iostream>
#include"start.h"
#include "nombreTableau.h"
#include "towerOfHanoi.h"
#include <fstream>
#include"affichageExcel.h"

void start(std::ofstream *FluxE,std::ofstream *FluxS,std::ofstream *FluxD){
          int ChoixStar;
        std ::cout<<"Alouha!! *-* \n Vous voulez jouer le Toure d Hanoi? ou bien Vous voulez decouvrir le monde des tris?!\nSi vous vouler jouez taper 1 sinon tapez n importe quell num \n Amusez vous <3 "<<std::endl;
    std::cin>>ChoixStar;
    
    if(ChoixStar==1){
        int replay=1;
        char A='A',B='B',C='C';
        while(replay==1){
        	double compteurHanoie=0;
            std::cout<<"\t\tTour d'hanoi! bienvenue\n"<<std::endl;
            int disk;
            std::cout<<"entrer nombre de disk: ";
            std::cin>>disk;
            hanoi(disk,A,B,C,&compteurHanoie);
            afficheHanoieExcel(disk,compteurHanoie,*FluxD);
            std::cout<<"vous voulez une nouvelle partie?\n \t Si oui tapez 1 :) \t";
            std::cin>>replay;   
        }
        std::cout<<"Merci*-* bonne journee!<3 *hug*\n"<<std::endl;
        
           
            }
    else {
        int choixNombre;
        std::cout<<"combien de tableau vous voullez intoduiser? ";
                std::cin>>choixNombre;
                 nombreTableau(choixNombre,FluxE,FluxS);
    }
}

