#include <iostream>
using namespace std;
#include "CBus.h"

CBus::CBus()
{
    m_hauler  = "";
    m_typeOfTrip = "";
}

CBus::CBus(string hauler,string typeOfTrip)
{
    m_hauler = hauler;
    m_typeOfTrip = typeOfTrip;
}

void CBus::ChoiceTypeOfTrip()
{
    int choice = 0;
    cout << "Choice type of trip:\n";
    cout << "1. Directly \n";
    cout << "2. Passing \n";
    cout << "3. To transfer \n";
    cout << "Your choice: ";
    cin >> choice;

    while(choice <= 0 || choice > 3)
    {
        cout << "Your choice have to be between 1 and 3 inclusive.\n";
        cout << "Choose again: ";
        cin >> choice;
    }

    switch(choice)
    {
      case 1:
          SettypeOfTrip("directly");
              break;
      case 2:
          SettypeOfTrip("passing");
              break;
      case 3:
          SettypeOfTrip("to transfer");
              break;
      default :
        cout<<"Invalid choice";
        break;
    }
}

void CBus::Read()
{
  string hauler;
  string typeOfTrip;

  CDestination::Read();

  cout << "Hauler: ";
  cin.clear();
  cin.sync();
  getline(cin, hauler);
  Sethauler(hauler);

  ChoiceTypeOfTrip();
}

void CBus::Print()
{
  cout << "Hauler: " << Gethauler () << endl;
  cout << "Type of trip: " << GettypeOfTrip() << endl;
  CDestination::Print();
}

CBus::~CBus()
{

}












