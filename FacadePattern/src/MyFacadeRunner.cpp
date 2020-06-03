#include "MyClient.h"

using namespace std;

int main()
{
    MyClient *client1 = new MyClient();

    client1->computer1->startMyComputer();

    return 0;
}