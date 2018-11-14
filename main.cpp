#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include"start.h"
#include"afficheHanoieExcel.h"
#include "nombreTableau.h"


using namespace std;

int main(int argc, char** argv) {
	 time_t vt=time(NULL);
	ofstream FluxS("log.txt");
	FluxS<<"la taille\t tablOriginal\t \tselectif\t insertion\t bull\t \t\tmerge\t \trapid"<<endl;

    ofstream FluxE("file.csv");
    FluxE<<"taille ; ComSilect  ; ComInsertion ; comBull ; ComMergeSort ; ComRapid"<<endl;
    ofstream FluxD("hanoie.csv");
    FluxD<<"NDisk ; complxite"<<endl;;
    if(FluxE && FluxS && FluxD){
    	start(&FluxE,&FluxS,&FluxD);
    }

   struct tm w=*localtime(&vt);
	cout<<"le programe ce tarmine a "<<w.tm_mday<<"/"<<w.tm_mon+1<<"/"<<w.tm_year+1900<<"\n"<<w.tm_hour<<"h/"<<w.tm_min<<"min/"<<w.tm_sec<<"sec"<<
	endl; 
	FluxE.close();
	FluxS.close();
	FluxD.close();
	system("start plot.gnu");
	system("start plotHanoie.gnu");
 }

