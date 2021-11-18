#ifndef DYNAMICMASSIVE_H_INCLUDED
#define DYNAMICMASSIVE_H_INCLUDED

#include "BaseData.h"

template <class T>
class DynamicMassive {
private:
    BaseData<T> * m_data;
public:
    DynamicMassive(int size=5);
    ~DynamicMassive();
    BaseData<T> findMin();
    BaseData<T> getValue(int);
    void setValue(int, BaseData<T>);
};

#endif // DYNAMICMASSIVE_H_INCLUDED
