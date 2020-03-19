#include <cstdlib>
#include <iostream>

#include "InetAddress.h"

using namespace std;

int main(int argc, char *argv[])
{
    WSADATA wsadata; //1
    if(WSAStartup(0x101,(LPWSADATA)&wsadata) != 0) //2
    {
       exit(1);
    }


//
//    InetAddress *localAddr, *googleAddr, *ufpbAddr;
//
//    try
//    {
//        localAddr = InetAddress::getLocalHost();
//        googleAddr = InetAddress::getByName("www.google.com");
//        ufpbAddr = InetAddress::getByAddress("172.217.28.68");
//    }catch(UnknownHostException &uhe)
//    {
//        cout << uhe.what() << endl;
//        return 1;
//    }
//    cout << "Name:" << localAddr->getHostName() << endl;
//    cout << "Address:" << localAddr->getHostAddress() << endl << endl;
//    cout << "Name:" << googleAddr->getHostName() << endl;
//    cout << "Address:" << googleAddr->getHostAddress() << endl << endl;
//    cout << "Name:" << ufpbAddr->getHostName() << endl;
//    cout << "Address:" << ufpbAddr->getHostAddress() << endl;
}
