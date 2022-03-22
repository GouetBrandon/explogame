#ifndef RENNES_H
#define RENNES_H

#include <string>
#include <iostream>
#include <vector>
#include "lieux.cpp"

using namespace std;

class Rennes : public lieux{

    public:
        Rennes();
        Rennes(string name,string description);

        string getName();
        string getDescription();
        string getNext(string next);

        int getDifficulty();
        int setDifficulty(int newDiffculty);

        void changeDifficulty(int newDifficulty);

};

#endif