#include <iostream>
using namespace std;

#include "CAir.h"

CAir::CAir()
{
   m_company = "";
   m_airplane = "";
}

CAir::CAir(string company,string airplane)
{
   m_company = company;
   m_airplane = airplane;
}

void CAir::Read()
{
  string company;
  string airplane;

  CDestination::Read();

  cout << "Company: ";
  cin.clear();
  cin.sync();
  getline(cin, company);
  Setcompany(company);

  cout << "Airplane: ";
  getline(cin, airplane);
  //cin >> airplane;
  Setairplane(airplane);
}

void CAir::Print()
{
  cout << "Company: " << Getcompany() << endl;
  cout << "Airplane: " << Getairplane() << endl;
  CDestination::Print();
}

CAir::~CAir()
{

}
