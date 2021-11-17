#include "IntData.h"
#include "DoubleData.h"
#include <iostream>
using namespace std;
int main()
{
    IntData getint;
    DoubleData getdouble;
    IntData data1;
    IntData data2(10);
    DoubleData doubledata1;
    DoubleData doubledata2(10.7654);
    IntData * pData1 = new IntData;
    IntData * pData2 = new IntData(20);
    DoubleData * pdoubleData1 = new DoubleData;
    DoubleData * pdoubleData2 = new DoubleData(20.6678);

    data1.InputData();
    cout << "Your int number: ";
    data1.print();
    data2.print();
    doubledata1.InputData();
    cout << "Your double number: ";
    doubledata1.print();
    doubledata2.print();
    pData1->InputData();
    cout << "Your array int number: ";
    pData1->print();
    pData2->print();
    pdoubleData1->InputData();
    cout << "Your array double number: ";
    pdoubleData1->print();
    pdoubleData2->print();
    getint.SetData(8);
    getdouble.SetData(14.56);
    getint.GetData();
    getdouble.GetData();
    getint.print();
    getdouble.print();

    delete pData1;
    delete pData2;
    delete pdoubleData1;
    delete pdoubleData2;
    return 0;
}

