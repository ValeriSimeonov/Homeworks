#ifndef CDATE_H
#define CDATE_H

#include<string>
#include "CReadAndPrint.h"
#include<iostream>
using namespace std;

class CDate : public CReadAndPrint
{
    public:
        CDate();
        CDate(string, string, string);
        virtual ~CDate();

        string Getday() { return m_day; }
        void Setday(string val) { m_day = val; }
        string Getmonth() { return m_month; }
        void Setmonth(string val) { m_month = val; }
        string Getyear() { return m_year; }
        void Setyear(string val) { m_year = val; }
        void Read();
        void Print();

    protected:

    private:
        string m_day;
        string m_month;
        string m_year;
};

#endif // CDATE_H
