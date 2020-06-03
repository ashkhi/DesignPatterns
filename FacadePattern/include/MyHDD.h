#pragma once
#include <iostream>

using namespace std;

class MyHDD
{
    private:
        static MyHDD *HDDInstance;
        MyHDD();

    public:
        static MyHDD * getHDDInstance();
        int getBootBlockMemAddress();
};