#include <iostream> 
#include <string>
#include "compte.h"
using namespace std ;

Compte :: Compte(string mon_n_identite ,string mon_prenom ,string mon_nom ,int mon_code,int mon_numero_compte ,float mon_solde ) {

n_identite= mon_n_identite ;
prenom = mon_prenom ;
nom = mon_nom ;
code = mon_code;
numero_compte = mon_numero_compte ;
solde = mon_solde ;

}

int Compte :: identification(int mon_code_secret ){

   

    if (mon_code_secret==code ){

        cout << " voici le menu de notre compte bancaire " <<endl ;

        cout << "1. Crediter " <<endl ;
        cout << "2. debiter " <<endl;
        cout << "3.Consultation " <<endl ;
        cout << "4.virement " << endl;
        cout << "5.Commande " <<endl;

        cout << "veuillez faire votre choix " << endl;

        int choix ;
        cin >> choix ;

        switch (choix)
        {
        case 1:
           crediter ();
            break;
        case 2:
            debiter ();
            break;
        case 3:
            consulter () ;
            break;
            case 4:
            virement () ;
            break;
            case 5:
           commande () ;
            break;

        default:
        cout << " Erreur de choix " << endl;
            break;
        }

    }
    else {

        cout << " votre code est incorrecte  veuillez reessayer " << endl;
        
    }
    


}


void Compte :: crediter (){

}
void Compte :: debiter(){

}
void Compte :: consulter(){

}
void Compte :: virement(){


}
void Compte :: commande(){


}