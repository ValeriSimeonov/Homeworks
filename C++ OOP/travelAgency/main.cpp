#include <iostream>
#include "CReadAndPrint.h"
#include "CPerson.h"
#include "CDate.h"
#include "CTrain.h"
#include "CBus.h"
#include "CAir.h"
#include "CPassenger.h"
#include "CDestination.h"
#include "CAgency.h"
#include <string>
using namespace std;

int main()
{
    CAgency * agency;
    agency = new CAgency;
    int numOfReservations = 0;
    cout << "Enter number of reservations: ";
    cin >> numOfReservations;
    int choice;
    do
    {
        cout<<"1. Create reservation\n";
        cout<<"2. Print reservation\n";
        cout<<"3. Add new reservation\n";
        cout<<"4. Sum of reservation\n";
        cout<<"5. Name of reservation for latest date\n";
        cout<<"0. Exit\n";
        cout<<"Your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            agency ->CCreateArrayOfPassengers(numOfReservations);
            break;
        }
        case 2:
        {
            agency ->PrintOfReservation(numOfReservations);
            break;
        }
        case 3:
        {
            agency ->CAddReservation(numOfReservations);
            numOfReservations++;
            break;
        }
        case 4:
        {
            string date;
            cout << "Enter date to sum of reservations: ";
            cin >> date;
            agency ->CSumOfReservationsForOneDate(date, numOfReservations);
            break;
        }
        case 5:
        {
            agency ->CNameOfReserfvationForLatestDate(numOfReservations);
            break;
        }
        case 0:
            break;
        default:
            cout<<"Error\n";
        }
    }
    while(choice);

    delete agency;
    return 0;
}
