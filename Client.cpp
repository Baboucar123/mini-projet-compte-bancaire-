#include <iostream>
#include <string>
#include "Client.h"

using namespace std ;

Client :: Client (string num_identite, string mon_nom , string mon_prenom ,string numero )
{

Cin = num_identite ;
Nom = mon_nom ;
Prenom = mon_prenom;  
Numero_de_telephone = numero;

}
        
void Client :: affiche_identite_client(){

cout << "CIN : " << Cin  << endl; ;
cout << "NOM :  "<< Nom << endl ;
cout << "PRENOM " << Prenom << endl ;  
cout << "NUMERO DE TELEPHONE : " << Numero_de_telephone  << endl;

}