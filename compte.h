#include <iostream>
#include <string>
using namespace std ;

class Compte {

private : 

string n_identite ;
string prenom ;
string nom ;
int code ;
int numero_compte ;
float solde ;

public : 

Compte(string  ,string  ,string ,int,int ,float  ) ;

int identification(int );

void crediter ();
void debiter ();
void consulter () ;
void virement () ;
void commande () ;


};