#include "DynamicMassive.h"

template <class T>
DynamicMassive<T>::DynamicMassive(int size) {
    m_data = new BaseData<T>[size];
}

template <class T>
DynamicMassive<T>::~DynamicMassive() {
    delete m_data;
}

template <class T>
BaseData<T> DynamicMassive<T>::findMin() {
    BaseData<T> min = m_data[0];
    for (BaseData<T> i : m_data) {
        if (i.getValue() < min.getValue) {
            min = i;
        }
    }

    return min;
}

template <class T>
BaseData<T> DynamicMassive<T>::getValue(int index) {
    return m_data[index];
}

template <class T>
void DynamicMassive<T>::setValue(int index, BaseData<T> value) {
    m_data[index] = value;
}
