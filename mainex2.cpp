#include <string>
#include <iostream>

using namespace std;


int main(){

string lieu1 = "Rennes";
string lieu2 = "St-Malo";
string choix;

cout<<"Veuillez choisir une destination : "<<endl;
cout<<"Rennes, St-Malo"<<endl;
cin>>choix;

if (choix == "Rennes"){
    cout<<"Vous êtes arrivé à Rennes"<<endl;
}

if (choix == "St-Malo"){
    cout<<"Vous êtes arrivé à St-Malo"<<endl;
}

}