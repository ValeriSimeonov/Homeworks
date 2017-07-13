#ifndef CBUS_H
#define CBUS_H
#include "CDestination.h"
#include<string>
#include<iostream>
using namespace std;

class CBus : virtual public CDestination
{
  public:
    CBus();
    CBus(string,string);
    virtual ~CBus();

    string Gethauler() { return m_hauler; }
    void Sethauler(string val) { m_hauler = val; }
    string GettypeOfTrip() { return m_typeOfTrip; }
    void SettypeOfTrip(string val) { m_typeOfTrip = val; }
    void Read();
    void Print();


  protected:
    void ChoiceTypeOfTrip();

  private:
    string m_hauler;
    string m_typeOfTrip;
};

#endif // CBUS_H
