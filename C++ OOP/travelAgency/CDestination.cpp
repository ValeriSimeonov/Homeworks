#include "CReadAndPrint.h"
#include "CDestination.h"
#include<iostream>
#include<string>
using namespace std;

CDestination::CDestination()
{
    m_country = "";
    m_city = "";
    m_distanceInKm = 0;
}

CDestination::CDestination(string country, string city, int distanceInKm)
{
    m_country = country;
    m_city = city;
    m_distanceInKm = distanceInKm;
}

void CDestination::ChoiceOfCountry()
{
    int choice = 0;
    cout << "Choose country: \n";
    cout << "1. Bulgaria\n";
    cout << "2. Spain\n";
    cout << "Your choice: ";
    cin >> choice;

    while(choice < 1 || choice > 2)
    {
        cout << "Your choice must be 1 for Bulgaria or 2 for Spain.\n";
        cout << "Choose again: ";
        cin >> choice;
    }

    switch(choice)
    {
        case 1: Setcountry("Bulgaria");
            break;
        case 2: Setcountry("Spain");
            break;
        default:
            break;
    }
}

void CDestination::ChoiceOfCity()
{
    int choice = 0;
    if(Getcountry() == "Bulgaria")
    {
        cout << "Choose bulgarian city:\n";
        cout << "1. Bourgas\n";
        cout << "2. Plovdiv\n";
        cout << "3. Varna\n";
        cout << "Your choice is: ";
        cin >> choice;

        while(choice < 1 || choice > 3)
        {
            cout << "Your choice must be between 1 and 3 inclusive.\n";
            cout << "Choose again: ";
            cin >> choice;
        }

        switch(choice)
        {
            case 1: Setcity("Bourgas");  SetdistanceInKm(383);
                    break;
            case 2: Setcity("Plovdiv"); SetdistanceInKm(120);
                    break;
            case 3: Setcity("Varna"); SetdistanceInKm(420);
                    break;
            default: "Invalid choice."; break;
        }
    }

    if(Getcountry() == "Spain")
    {
        cout << "Choose spain city:\n";
        cout << "1. Barcelona\n";
        cout << "2. Sevilla\n";
        cout << "3. Valencia\n";
        cout << "Your choice is: ";
        cin >> choice;

        while(choice < 1 || choice > 3)
        {
            cout << "Your choice must be between 1 and 3 inclusive.\n";
            cout << "Choose again: ";
            cin >> choice;
        }

        switch(choice)
        {
            case 1: Setcity("Barcelona");  SetdistanceInKm(1746);
                    break;
            case 2: Setcity("Sevilla"); SetdistanceInKm(3359);
                    break;
            case 3: Setcity("Valencia"); SetdistanceInKm(2901);
                    break;
            default: "Invalid choice."; break;
        }
    }
}

void CDestination::Read()
{
    ChoiceOfCountry();
    ChoiceOfCity();
}

void CDestination::Print()
{
    cout << "Distance from Sofia to " << Getcity() << " is ";
    cout << GetdistanceInKm();
    cout << "km." << endl;
}

CDestination::~CDestination()
{

}


