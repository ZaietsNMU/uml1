#ifndef DOUBLEDATA_H_INCLUDED
#define DOUBLEDATA_H_INCLUDED

#include "BaseData.h"

class DoubleData : public BaseData<double> {
private:
    double m_data;
public:
    DoubleData(double data=0);
    ~DoubleData();
    void print();
    double getValue();
    void setValue(double);
};


#endif // DOUBLEDATA_H_INCLUDED
