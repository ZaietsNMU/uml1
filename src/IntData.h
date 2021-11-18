#ifndef INTDATA_H_INCLUDED
#define INTDATA_H_INCLUDED

#include "BaseData.h"

class IntData : public BaseData<int> {
private:
    int m_data;
public:
    IntData(int data=0);
    ~IntData();
    void print();
    int getValue();
    void setValue(int);
};

#endif // INTDATA_H_INCLUDED
