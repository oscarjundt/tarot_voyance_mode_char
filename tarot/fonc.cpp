#include <random>
#include <ctime>
#include <iostream>
#include "fonc.h"

using namespace std;

void ini(int* xx1){
    srand(time(nullptr));
    for(int i=0;i<22;i++){
        int vr2 = rand() % 22;
        xx1[i]=vr2;
    }
}

void affichage(int* xx0, char xx12[22][100],int x55){
    for(int i=0;i<100;i++){
        cout << xx12[xx0[x55]][i];
    }
    cout << endl;
}
