#include "MyClient.h"

MyClient::MyClient()
{
    computer1 = new MyComputerFacade();
    cout << "Client is created and initialized" << endl;
    cout << "Client has handle for computer1" << endl;
}