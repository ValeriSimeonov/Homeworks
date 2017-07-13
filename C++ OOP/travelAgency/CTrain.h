#ifndef CTRAIN_H
#define CTRAIN_H

#include "CDestination.h"
#include "CReadAndPrint.h"
#include<string>
#include<iostream>
using namespace std;

class CTrain : virtual public CDestination
{
    public:
        CTrain();
        CTrain(string, int);
        virtual ~CTrain();

        string GettrainNumber() { return m_trainNumber; }
        void SettrainNumber(string val) { m_trainNumber = val; }
        int GettrainClass() { return m_trainClass; }
        void SettrainClass(int val) { m_trainClass = val; }
        void Read();
        void Print();

    protected:

    private:
        string m_trainNumber;
        int m_trainClass;
};

#endif // CTRAIN_H
