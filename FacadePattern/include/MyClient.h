#pragma once
#include <iostream>
#include "MyComputerFacade.h"

using namespace std;

class MyClient
{
    public:
        MyClient();

        MyComputerFacade *computer1;
};