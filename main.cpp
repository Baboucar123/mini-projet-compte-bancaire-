#include <iostream>
#include "compte.h"

using namespace std ;

int main (){

    int mon_code_secret ;

    Compte client1 ("A045y89","Baboucar", "COLY",1001,65458912,0);

     cout << " Bienvenue Dans notre distributeur " << endl;

    cout << "veuillez entre votre carte " << endl;


    cout << "saisissez votre code a quater chiffre  " << endl;

    cin >> mon_code_secret ;

    client1.identification(mon_code_secret);
    return 0;
}