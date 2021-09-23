#include <iostream>
#include "fonc.h"

using namespace std;

int main(){
    char tab[22][100]{"I. Le Bateleur","II. La Papesse","III. L’Impératrice","IIII. L’Empereur","V. Le Pape","VI. L’Amoureux","VII. Le Chariot","VIII. La Justice","VIIII. L’Hermite","X. La Roue de Fortune","XI. La Force","XII. Le Pendu","XIII. L’Arcane sans nom","XIIII. Tempérance","XV. Le Diable","XVI. La Maison Dieu","XVII. L’Étoile","XVIII. La Lune","XVIIII. Le Soleil","XX. Le Jugement","XXI. Le Monde","Le Mat"};
    int tab2[22];
    int a;
    ini(tab2);
    for(int i=0;i<4;i++){
        cout << "donner nb: ";
        cin>>a;
        cout <<endl;
        affichage(tab2,tab,a);
    }
}