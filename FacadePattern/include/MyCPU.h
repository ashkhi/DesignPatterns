#pragma once
#include <iostream>

using namespace std;

class MyCPU
{
    private:
        static MyCPU *CPUInstance;
        MyCPU();

    public:
        static MyCPU * getCPUInstance();
        void getReadyToStartState();
};