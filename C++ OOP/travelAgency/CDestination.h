#ifndef CDESTINATION_H
#define CDESTINATION_H

#include "CReadAndPrint.h"
#include<iostream>
#include<string>
using namespace std;

class CDestination : public CReadAndPrint
{
    public:
        CDestination();
        CDestination(string, string, int);
        virtual ~CDestination();

        string Getcountry() { return m_country; }
        void Setcountry(string val) { m_country = val; }
        string Getcity() { return m_city; }
        void Setcity(string val) { m_city = val; }
        int GetdistanceInKm() { return m_distanceInKm; }
        void SetdistanceInKm(int val) { m_distanceInKm = val; }
        void ChoiceOfCountry();
        void ChoiceOfCity();
        void Read();
        void Print();

    protected:

    private:
        string m_country;
        string m_city;
        int m_distanceInKm;
};

#endif // CDESTINATION_H
