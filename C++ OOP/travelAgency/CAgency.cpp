#include "CAgency.h"
#include "CPassenger.h"
#include<string>
#include<iomanip>
#include<iostream>
using namespace std;

CAgency::CAgency()
{
    m_agencyName = "";
}

CAgency::CAgency(string agencyName)
{
    m_agencyName = agencyName;
}

void CAgency::CCreateArrayOfPassengers(int numOfReservations)
{
    passenger = new CPassenger[numOfReservations];

    for(int i = 0; i < numOfReservations; ++i)
    {
        cout << "Reservation number: " << i + 1<< endl;
        passenger[i].Read();
        passenger[i].CalcPriceOfReservation();
        cout << endl;
    }
    cout << endl;
}

void CAgency::CSumOfReservationsForOneDate(string date, int numOfReservations)
{
    double sum = 0.0;
    for(int i = 0; i < numOfReservations; ++i)
    {
        if(passenger[i].GetdateOfTrip() == date)
        {
            sum += passenger[i].GetPriceOfReservation();
        }
    }
    cout << "The sum of all reservations for date: " << date << " is " << fixed << setprecision(2) << sum << "EURO" << endl;
}

void CAgency::PrintOfReservation(int numOfReservations)
{
    int currentNumOfReservation = 0;
    for(int i = 0; i < numOfReservations; ++i)
    {
        currentNumOfReservation = i;
        cout << "Reservation number: " << currentNumOfReservation + 1 << endl;
        passenger[i].Print();
        cout << endl;
    }
}

void CAgency::CAddReservation(int numOfReservations)
{
    CPassenger *point = passenger;
    int index;
    int temp = numOfReservations;
    temp++;
    passenger = new CPassenger[temp];
    for(index = 0; index < temp -1; ++index)
    {
        passenger[index] = point[index];
    }
    delete [] point;
    passenger[index].Read();
    passenger[index].CalcPriceOfReservation();
}

void CAgency::CNameOfReserfvationForLatestDate(int numOfReservations)
{
    string maxDate = passenger[0].GetdateOfTrip();
    string nameOfLatestReservation = "";
    string date = "";
    for(int i = 1; i < numOfReservations; ++i)
    {
        date = passenger[i].GetdateOfTrip();
        if(maxDate < date)
        {
            maxDate = date;
            nameOfLatestReservation = passenger[i].GetnameOfPerson();
        }
    }
    cout << "Name of latest reservation is: " << nameOfLatestReservation << " for date " << maxDate << endl;
}

CAgency::~CAgency()
{
    delete []passenger;
}
