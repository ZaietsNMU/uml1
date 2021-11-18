#include "DoubleData.h"

DoubleData::DoubleData(double data) {
    m_data = data;
}

DoubleData::~DoubleData() {}

void DoubleData::print() {
    printf("%d\n", m_data);
}

double DoubleData::getValue() {
    return m_data;
}

void DoubleData::setValue(double newValue) {
    m_data = newValue;
}
