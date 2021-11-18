#include "IntData.h"
#include "DynamicMassive.h"

using namespace std;

int main()
{
    IntData data1;
    IntData data2(10);
    IntData* pData1 = new IntData();
    IntData* pData2 = new IntData(20);

    DynamicMassive<IntData> mass(2);
    mass.setValue(0, data1);
    mass.setValue(1, data2);
    printf("%d\n", mass.findMin().getValue());

    data1.print();
    data2.print();
    pData1->print();
    pData2->print();

    delete pData1, pData2;

    return 0;
}
