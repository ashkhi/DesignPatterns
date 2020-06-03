#include "MyComputerFacade.h"

MyComputerFacade::MyComputerFacade()
{
    cout << "MyComputerFacade object created and initialized" << endl;
}

void MyComputerFacade::startMyComputer()
{
    MyCPU *cpu = MyCPU::getCPUInstance();
    MyHDD *hdd = MyHDD::getHDDInstance();
    MyRAM *ram = MyRAM::getRAMInstance();

    cpu->getReadyToStartState();
    int bootAddress = hdd->getBootBlockMemAddress();
    ram->loadBootBlock(bootAddress);

    cout << "Computer is booting up..." << endl;
}