#ifndef STMALO_H
#define STMALO_H

#include <string>
#include <iostream>
#include <vector>
#include "lieux.cpp"

using namespace std;

class Stmalo : public lieux{

    public:
        Stmalo();
        Stmalo(string name,string description);

        string getName();
        string getDescription();
        string getNext(string next);

        int getDifficulty();
        int setDifficulty(int newDiffculty);

        void changeDifficulty(int newDifficulty);

};

#endif