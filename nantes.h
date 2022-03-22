#ifndef NANTES_H
#define NANTES_H

#include <string>
#include <iostream>
#include <vector>
#include "lieux.cpp"

using namespace std;

class Nantes : public lieux{

    public:
        Nantes();
        Nantes(string name,string description);

        string getName();
        string getDescription();
        string getNext(string next);

        int getDifficulty();
        int setDifficulty(int newDiffculty);

        void changeDifficulty(int newDifficulty);

};

#endif