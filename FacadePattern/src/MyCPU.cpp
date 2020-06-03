#include "MyCPU.h"

MyCPU * MyCPU::CPUInstance = nullptr; 

MyCPU::MyCPU()
{
    cout << "MyCPU object created and initialzed" << endl;
}

MyCPU * MyCPU::getCPUInstance()
{
    if (!CPUInstance)
    {
        CPUInstance = new MyCPU();
    }

    return CPUInstance;
}

void MyCPU::getReadyToStartState()
{
    cout << "CPU is ready to use!" << endl;
}