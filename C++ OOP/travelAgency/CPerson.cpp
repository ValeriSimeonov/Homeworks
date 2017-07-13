#include "CReadAndPrint.h"
#include "CPerson.h"
#include <iostream>
#include <string>
using namespace std;

CPerson::CPerson()
{
    m_name = "";
    m_address = "";
}

CPerson::CPerson(string personName, string personAddress)
{
    m_name = personName;
    m_address = personAddress;
}

void CPerson::Read()
{
    //CReadAndPrint::Read();
    string personName;
    string personAddress;

    cin.clear();
    cin.sync();

    cout << "Enter person name: ";
    getline(cin, personName);
    Setname(personName);

    cin.clear();
    cin.sync();

    cout << "Enter person address: ";
    getline(cin, personAddress);
    Setaddress(personAddress);
}

void CPerson::Print()
{
    cout << Getname() << endl;
    cout << "Person address: " << Getaddress();
}

CPerson::~CPerson()
{
    //dtor
}
