#pragma once
#include <iostream>

using namespace std;

class MyRAM
{
    private:
        static MyRAM *RAMInstance;
        MyRAM();

    public:
        static MyRAM * getRAMInstance();
        void loadBootBlock(int add);
};