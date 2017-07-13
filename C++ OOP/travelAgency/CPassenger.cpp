#include<iostream>
#include<iomanip>
#include<string>
#include "CPassenger.h"
#include "CTrain.h"
#include "CBus.h"
#include "CAir.h"
#include "CDate.h"
#include "CPerson.h"
using namespace std;

CDate date;
CPerson person;

CPassenger::CPassenger()
{
    m_dateOfTrip = "";
    m_seatNumber = 0;
    m_kindOfTransport = "";
    m_priceOfReservation = 0.0;
    m_nameOfPerson = "";
    m_addressOfPerson = "";
}

CPassenger::CPassenger(string dateOfTrip, int seatNumber, string kindOfTransport, double priceOfReservation, string nameOfPerson, string addressOfPerson)
{
    m_dateOfTrip = dateOfTrip;
    m_seatNumber = seatNumber;
    m_kindOfTransport = kindOfTransport;
    m_priceOfReservation = priceOfReservation;
    m_nameOfPerson = nameOfPerson;
    m_addressOfPerson = addressOfPerson;
}

void CPassenger::ChoiceOfTransport()
{
    int choice = 0;
    cout << "Choose type of transport:\n";
    cout << "1. Train.\n";
    cout << "2. Bus.\n";
    cout << "3. Air.\n";
    cout << "Enter your choice: ";

    cin >> choice;
    while(choice < 1 || choice > 3)
    {
        cout << "Your choice must be between 1 and 3 inclusive.\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    switch(choice)
    {
        case 1:
            CTrain::Read();
            SetkindOfTransport("Train");
            break;
        case 2:
            CBus::Read();
            SetkindOfTransport("Bus");
            break;
        case 3:
            CAir::Read();
            SetkindOfTransport("Air");
            break;
        default:
            cout << "Invalid choice.";
            break;
    }
}

void CPassenger::PrintTransportData()
{
    if(GetkindOfTransport() == "Train")
    {
        CTrain::Print();
    }
    else
    {
        if(GetkindOfTransport() == "Bus")
        {
            CBus::Print();
        }
        if(GetkindOfTransport() == "Air")
        {
            CAir::Print();
        }
    }
}

void CPassenger::ChooseSeatNumber()
{
    int seatNumber = 0;
    if(GetkindOfTransport() == "Train")
    {
        int temp = GettrainClass();
        if(temp == 1)
        {
            cout << "Choose seat number between 1 and 80 inclusive: ";
            cin >> seatNumber;
            while(seatNumber < 1 || seatNumber > 80)
            {
                cout << "Seat number must be between 1 and 80 inclusive.\n";
                cout << "Choose seat number again: ";
                cin >> seatNumber;
            }
            SetseatNumber(seatNumber);
        }
        if(temp == 2)
        {
            cout << "Choose seat number between 81 and 240 inclusive: ";
            cin >> seatNumber;
            while(seatNumber < 81 || seatNumber > 240)
            {
                cout << "Seat number must be between 81 and 240 inclusive.\n";
                cout << "Choose seat number again: ";
                cin >> seatNumber;
            }
            SetseatNumber(seatNumber);
        }
    }
    else
    {
        if(GetkindOfTransport() == "Bus")
        {
            cout << "Choose seat number between 1 and 40: ";
            cin >> seatNumber;
            while(seatNumber < 1 || seatNumber > 40)
            {
                cout << "Seat number must be between 1 and 40 inclusive.\n";
                cout << "Choose seat number again: ";
                cin >> seatNumber;
            }
            SetseatNumber(seatNumber);
        }
        if(GetkindOfTransport() == "Air")
        {
            cout << "Choose seat number between 1 and 150: ";
            cin >> seatNumber;
            while(seatNumber < 1 || seatNumber > 150)
            {
                cout << "Seat number must be between 1 and 150 inclusive.\n";
                cout << "Choose seat number again: ";
                cin >> seatNumber;
            }
            SetseatNumber(seatNumber);
        }
    }
}

void CPassenger::CalcPriceOfReservation()
{
    double priceOfKmForTrainClass1 = 0.035;
    double priceOfKmForTrainClass2 = 0.030;
    double priceOfKmForBus = 0.04;
    double priceOfKmForAir = 0.05;
    double ticketPrice = 0.0;

    if(GetkindOfTransport() == "Train")
    {
        if(GettrainClass() == 1)
        {
            ticketPrice = GetdistanceInKm() * priceOfKmForTrainClass1;
        }
        else
        {
            ticketPrice = GetdistanceInKm() * priceOfKmForTrainClass2;
        }
    }
    else
    {
        if(GetkindOfTransport() == "Bus")
        {
            ticketPrice = GetdistanceInKm() * priceOfKmForBus;
        }
        if(GetkindOfTransport() == "Air")
        {
            ticketPrice = GetdistanceInKm() * priceOfKmForAir;
        }
    }
    SetPriceOfReservation(ticketPrice);
}

void CPassenger::Read()
{
    string dateOfTrip;
    int seatNumber;
    double priceOfReservation;
    string nameOfPerson;
    string addressOfPerson;

    cout << "Enter date of trip:\n";
    date.Read();

    dateOfTrip = date.Getday() + "." + date.Getmonth() + "." + date.Getyear();
    SetdateOfTrip(dateOfTrip);

    ChoiceOfTransport();
    ChooseSeatNumber();
    person.Read();
    nameOfPerson = person.Getname();
    SetnameOfPerson(nameOfPerson);

    addressOfPerson = person.Getaddress();
    SetaddressOfPerson(addressOfPerson);

    cout << endl;
}

void CPassenger::Print()
{
    cout << "Person`s reservation:\n";
    cout << "Date of trip: ";
    cout << GetdateOfTrip() << endl;
    cout << "Person full name: ";
    cout << GetnameOfPerson();
    cout << endl;
    cout << "Address of person: ";
    cout << GetaddressOfPerson();
    cout << endl;
    cout << "Destination: ";
    cout << Getcountry() << ", " << Getcity() << endl;
    cout << "Type of transport: " << GetkindOfTransport() << endl;
    PrintTransportData();
    cout << "Seat number: " << GetseatNumber() << endl;
    cout << "Ticket price is: " << fixed << setprecision(2) << GetPriceOfReservation() << " EURO" << endl;
}

CPassenger::~CPassenger()
{

}
