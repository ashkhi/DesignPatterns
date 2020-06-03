#include "MyHDD.h"

MyHDD * MyHDD::HDDInstance = nullptr; 

MyHDD::MyHDD()
{
    cout << "MyHDD object created and initialzed" << endl;
}

MyHDD * MyHDD::getHDDInstance()
{
    if (!HDDInstance)
    {
        HDDInstance = new MyHDD();
    }

    return HDDInstance;
}

int MyHDD::getBootBlockMemAddress()
{
    return 12345;
}