#include <string>
#include <iostream>

using namespace std;


int main(){

string lieu1 = "Rennes";
string lieu2 = "St-Malo";
int choix;

cout<<"Veuillez choisir une destination : "<<endl;
cout<<"1: Rennes  2: St-Malo "<<endl;
cin>>choix;

if (choix == 1){
    cout<<"Vous êtes arrivé à Rennes"<<endl;
}

if (choix == 2){
    cout<<"Vous êtes arrivé à St-Malo"<<endl;
}

}