#include "MyRAM.h"

MyRAM * MyRAM::RAMInstance = nullptr; 

MyRAM::MyRAM()
{
    cout << "MyRAM object created and initialzed" << endl;
}

MyRAM * MyRAM::getRAMInstance()
{
    if (!RAMInstance)
    {
        RAMInstance = new MyRAM();
    }

    return RAMInstance;
}

void MyRAM::loadBootBlock(int add)
{
    cout << "Boot location : 0x" << std::hex << add << " loaded to RAM" << endl;
}