#ifndef CAIR_H
#define CAIR_H

#include "CDestination.h"


class CAir : virtual public CDestination
{
  public:
    CAir();
    CAir(string,string);
    virtual ~CAir();

    string Getcompany() { return m_company; }
    void Setcompany(string val) { m_company = val; }
    string Getairplane() { return m_airplane; }
    void Setairplane(string val) { m_airplane = val; }
    void Read();
    void Print();

  protected:

  private:
    string m_company;
    string m_airplane;
};

#endif // CAIR_H
