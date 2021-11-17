#include "IntData.h"
#include <iostream>
using namespace std;

IntData::IntData(int data)
{
    m_data = data;
}

IntData::~IntData()
{
}

void IntData::print()
{
    printf("%d\n", m_data);
}

void IntData::InputData()
{
    cout << "Enter int number: ";
    cin >> m_data;
}

void IntData::SetData(int data)
{
    m_data = data;
    cout << "m_data set by: " << m_data << endl;
}

int IntData::GetData()
{
    return m_data;
}
