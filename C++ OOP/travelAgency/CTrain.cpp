#include "CTrain.h"
#include<string>
#include<iostream>
using namespace std;

CTrain::CTrain()
{
    m_trainNumber = "";
    m_trainClass = 0;
}

CTrain::CTrain(string trainNumber, int trainClass)
{
    m_trainNumber = trainNumber;
    m_trainClass = trainClass;
}

void CTrain::Read()
{
    string trainNumber;
    int trainClass;

    CDestination::Read();

    cout << "Enter train number: ";
    //cin >> trainNumber;
    cin.clear();
    cin.sync();
    getline(cin, trainNumber);
    SettrainNumber(trainNumber);

    cout << "Enter train class 1 or 2: ";
    cin >> trainClass;
    while(trainClass < 1 || trainClass > 2)
    {
        cout << "Train class must be 1 or 2." << endl;
        cout << "Enter train class: ";
        cin >> trainClass;
    }
    SettrainClass(trainClass);
}

void CTrain::Print()
{
    cout << "Train number: " << GettrainNumber() << endl;
    cout << "Train class: " << GettrainClass() << endl;
    CDestination::Print();
}

CTrain::~CTrain()
{

}
