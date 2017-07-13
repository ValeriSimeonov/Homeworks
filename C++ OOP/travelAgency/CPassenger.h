#ifndef CPASSENGER_H
#define CPASSENGER_H

#include "CTrain.h"
#include "CBus.h"
#include "CAir.h"
#include<string>
#include<iostream>
using namespace std;

class CPassenger : public CTrain, public CBus, public CAir
{
    public:
        CPassenger();
        CPassenger(string, int, string, double, string, string);
        virtual ~CPassenger();

        string GetdateOfTrip() { return m_dateOfTrip; }
        void SetdateOfTrip(string val) { m_dateOfTrip = val; }
        int GetseatNumber() { return m_seatNumber; }
        void SetseatNumber(int val) { m_seatNumber = val; }
        string GetkindOfTransport() { return m_kindOfTransport; }
        void SetkindOfTransport(string val) { m_kindOfTransport = val; }
        double GetPriceOfReservation() { return m_priceOfReservation; }
        void SetPriceOfReservation(double val) { m_priceOfReservation = val; }
        string GetnameOfPerson() { return m_nameOfPerson; }
        void SetnameOfPerson(string val) { m_nameOfPerson = val; }
        string GetaddressOfPerson() { return m_addressOfPerson; }
        void SetaddressOfPerson(string val) { m_addressOfPerson = val; }

        void ChoiceOfTransport();
        void PrintTransportData();
        void ChooseSeatNumber();
        void CalcPriceOfReservation();
        void Read();
        void Print();

    protected:

    private:
        string m_dateOfTrip;
        int m_seatNumber;
        string m_kindOfTransport;
        double m_priceOfReservation;
        string m_nameOfPerson;
        string m_addressOfPerson;
};

#endif // CPASSENGER_H
