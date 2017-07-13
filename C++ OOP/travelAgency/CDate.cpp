#include "CDate.h"
#include "CReadAndPrint.h"
#include<iostream>
#include<string>
using namespace std;

CDate::CDate()
{
    m_day = "";
    m_month = "";
    m_year = "";
}

CDate::CDate(string day, string month, string year)
{
    m_day = day;
    m_month = month;
    m_year = year;
}

void CDate::Read()
{
    string day;
    string month;
    string year;

    cout << "Day: ";
    cin >> day;
    Setday(day);

    cout << "Month: ";
    cin >> month;
    Setmonth(month);

    cout << "Year: ";
    cin >> year;
    Setyear(year);
}

void CDate::Print()
{
    cout << "Day: " << Getday() << endl;
    cout << "Month: " << Getmonth() << endl;
    cout << "Year: " << Getyear() << endl;
}

CDate::~CDate()
{

}






