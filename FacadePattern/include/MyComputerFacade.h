#pragma once
#include <iostream>
#include "MyCPU.h"
#include "MyHDD.h"
#include "MyRAM.h"

using namespace std;

class MyComputerFacade
{
    public:
        MyComputerFacade();

        void startMyComputer();
};