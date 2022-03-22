#ifndef LIEUX_CPP
#define LIEUX_CPP


#include <string>
#include <iostream>
#include <vector>
#include "lieux.h"

using namespace std;

    lieux::lieux(): _name("NullePart"),_description("c'est nulle part"),_difficulty(0) {}
    lieux::lieux(string name,string description):

        _name(name),_description(description){

        }

    string lieux::getName(){
        return _name;
    }
    string lieux::getDescription(){
        return _description;
    }

    int lieux::getDifficulty(){
        return _difficulty;
    }
    int lieux::setDifficulty(int newDifficulty){
        _difficulty = newDifficulty;
        return _difficulty;
    }
    string lieux::getNext(string next){
        cout<<"Destinations disponibles :"<<endl;
        cout<<"Rennes,St-Malo,Nantes"<<endl;
        return next;
    }

    void lieux::changeDifficulty(int newDifficulty){}


#endif