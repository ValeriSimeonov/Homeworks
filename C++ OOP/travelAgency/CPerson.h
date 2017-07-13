#ifndef CPERSON_H
#define CPERSON_H

#include "CReadAndPrint.h"
#include <iostream>
#include <string>
using namespace std;

class CPerson : public CReadAndPrint
{
    public:
        CPerson();
        CPerson(string, string);
        virtual ~CPerson();

        string Getname() { return m_name; }
        void Setname(string val) { m_name = val; }
        string Getaddress() { return m_address; }
        void Setaddress(string val) { m_address = val; }
        void Read();
        void Print();

    protected:

    private:
        string m_name;
        string m_address;
};

#endif // CPERSON_H
