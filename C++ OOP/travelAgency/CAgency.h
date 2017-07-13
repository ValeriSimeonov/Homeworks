#ifndef CAGENCY_H
#define CAGENCY_H

#include<iostream>
#include<string>
#include "CPassenger.h"
using namespace std;

class CAgency
{
    public:
        CAgency();
        CAgency(string);
        virtual ~CAgency();

        string GetagencyName() { return m_agencyName; }
        void SetagencyName(string val) { m_agencyName = val; }
        void CCreateArrayOfPassengers(int);
        void CDeleteArrayOfPassengers();
        void PrintOfReservation(int);
        void CAddReservation(int);
        void CSumOfReservationsForOneDate(string date, int numOfReservations);
        void CNameOfReserfvationForLatestDate(int numOfReservations);

    protected:

    private:
        string m_agencyName;
        CPassenger * passenger;
};

#endif // CAGENCY_H
