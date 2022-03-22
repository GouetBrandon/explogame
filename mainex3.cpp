#include <string>
#include <iostream>
#include <vector>

#include "lieux.cpp"

using namespace std;


int main(){

    lieux * monLieu = new lieux();
    string choix;
    string lieu1 = "Rennes";
    string lieu2 = "St-Malo";
    string lieu3 = "Nantes";
    string next[3] = {lieu1,lieu2,lieu3};

    bool gameOver = false;

    while(!gameOver){



        cout<<"Veuillez choisir une destination : "<<endl;
        cout<<next[0]<<", "<<next[1]<<", "<<next[2]<<endl;
        cin>>choix;
        while (choix != next[0]&&choix != next[1]&&choix != next[2] ){
            cout<<"Mal écrit ou manque la majuscule"<<endl;
            cin>>choix;
        }
        cout<<"Vous êtes arrivé à "<<choix<<endl;
        cout<<"Difficulté du lieu : "<<monLieu->getDifficulty()<<endl;

    }

}