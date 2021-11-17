#include "DoubleData.h"
#include <iostream>
using namespace std;

DoubleData::DoubleData(double doubledata)
{
    r_data = doubledata;
}

DoubleData::~DoubleData()
{
}

void DoubleData::print()
{
    printf("%f\n", r_data);
}

void DoubleData::InputData()
{
    cout << "Enter double number: ";
    cin >> r_data;
}

void DoubleData::SetData(double data)
{
    r_data = data;
    cout << "r_data set by: " << r_data << endl;
}

double DoubleData::GetData()
{
    return r_data;
}
