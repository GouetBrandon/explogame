#ifndef LIEUX_H
#define LIEUX_H


#include <string>
#include <iostream>
#include <vector>
#include "lieux.cpp"

using namespace std;

class lieux{

    protected:
        string _name;
        string _description;
        int _difficulty;
        int _next[3];

    public:

        lieux();
        lieux(string name,string description);

        string getName();
        string getDescription();
        string getNext(string next);

        int getDifficulty();
        int setDifficulty(int newDiffculty);

        void changeDifficulty(int newDifficulty);

};

#endif