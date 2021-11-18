#ifndef BASEDATA_H_INCLUDED
#define BASEDATA_H_INCLUDED

#include <cstdio>

template <class T>
class BaseData {
public:
    BaseData();
    virtual ~BaseData();
    virtual void print()=0;
    virtual void setValue(T)=0;
    virtual T getValue()=0;
};

#endif // BASEDATA_H_INCLUDED
