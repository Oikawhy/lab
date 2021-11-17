#ifndef __DOUBLEDATA_H__
#define __DOUBLEDATA_H__

#include "BaseData.h"

class DoubleData : public BaseData {
    private:
        double r_data;
    public:
        DoubleData(double doubledata=0.0);
        ~DoubleData();
        void print();
        void InputData();
        virtual void SetData(double data);
        virtual double GetData();
};

#endif
